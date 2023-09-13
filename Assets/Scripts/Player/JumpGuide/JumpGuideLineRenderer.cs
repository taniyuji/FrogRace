using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class JumpGuideLineRenderer : MonoBehaviour
{
    [SerializeField]
    private PlayerComponentsProvider componentsProvider;

    [SerializeField]
    private List<Material> materials;

    private LineRenderer lineRenderer;

    private List<Vector3> linePositions = new List<Vector3>();

    void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (componentsProvider.playerStatesController.state
             != PlayerStatesController.States.AimingJump) return;

        linePositions.Clear();

        for (int i = 0; i < transform.childCount; i++)
        {
            //Debug.Log(transform.GetChild(i).name);
            if (!transform.GetChild(i).gameObject.activeSelf) continue;

            linePositions.Add(transform.GetChild(i).position);
        }

        linePositions.Add(componentsProvider.jumpTargetRenderer.transform.position);

        lineRenderer.positionCount = linePositions.Count;

        lineRenderer.SetPositions(linePositions.ToArray());
        //Debug.Log("SetLinePositions" + lineRenderer.positionCount);

        ChangeMaterial();
    }

    private void ChangeMaterial()
    {
        Debug.Log(componentsProvider.jumpTargetCollisionDetector.isOnGround);


        if (componentsProvider.jumpTargetCollisionDetector.isOnGround)
        {
            Debug.Log("SetGreen");
            lineRenderer.material = materials[0];
        }
        else if (!componentsProvider.jumpTargetCollisionDetector.isOnGround)
        {
            Debug.Log("SetRed");
            lineRenderer.material = materials[1];
        }
    }
}
