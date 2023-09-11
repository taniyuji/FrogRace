using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System.Linq;

public class JumpTargetCollisionDetector : MonoBehaviour
{
    [SerializeField]
    private PlayerStatesController statesController;

    public float fixedYPosition { get; private set; }

    private bool canSearch = false;


    void Start()
    {
        statesController.stateChanged.Subscribe(i =>
        {
            if (i == PlayerStatesController.States.AimingJump) canSearch = true;
            else canSearch = false;
        });
    }

    void Update()
    {
        if (!canSearch) return;

        fixedYPosition = CastRayAndGetGroundYPosition();
    }

    private float CastRayAndGetGroundYPosition()
    {
        var ray = new Ray(transform.position, Vector3.up);

        if (Physics.Raycast(ray, out RaycastHit hitAbove) && hitAbove.collider.CompareTag("Ground"))
        {
            //Debug.Log("hitAbove");
            return hitAbove.transform.position.y
                 + hitAbove.transform.localScale.y / 2;
        }
        else if (CheckOverlapSphere(out var hitColliders))
        {
            if (hitColliders.Length == 1)
            {
                //Debug.Log("overlapDetected");
                return hitColliders[0].transform.position.y
                     + hitColliders[0].transform.localScale.y / 2;
            }

            var highestCollider = hitColliders[0];

            for (int i = 1; i < hitColliders.Length; i++)
            {
                if (hitColliders[i].transform.position.y > highestCollider.transform.position.y)
                    highestCollider = hitColliders[i];
            }

            //Debug.Log("overlapDetected");

            return highestCollider.transform.position.y
                 + highestCollider.transform.localScale.y / 2;

        }
        else
        {
            ray = new Ray(transform.position, Vector3.down);

            if (Physics.Raycast(ray, out RaycastHit hitBelow) && hitBelow.collider.CompareTag("Ground"))
            {
                //Debug.Log("hitBelow");
                return hitBelow.transform.position.y
                     + hitBelow.transform.localScale.y / 2;
            }

            //Debug.Log("hitNothing");
            return fixedYPosition;
        }
    }

    private bool CheckOverlapSphere(out Collider[] hitColliders)
    {
        hitColliders = Physics.OverlapSphere(transform.position, 0).Where(i => i.gameObject.CompareTag("Ground")).ToArray();

        return hitColliders.Length > 0;
    }
}
