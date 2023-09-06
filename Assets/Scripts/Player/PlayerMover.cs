using UnityEngine;
using DG.Tweening;
using UniRx;
using System;
using System.Collections;

public class PlayerMover : MonoBehaviour
{
    private PlayerComponentsProvider playerComponentsProvider;

    private PlayerStatesController statesController;

    private JoyStickInformationProvider joyStickInformationProvider;

    private bool isAbleToJudgeLand = false;

    private void Awake()
    {
        playerComponentsProvider = GetComponent<PlayerComponentsProvider>();
    }

    // Start is called before the first frame update
    void Start()
    {
        statesController = playerComponentsProvider.playerStatesController;

        joyStickInformationProvider = playerComponentsProvider.joyStickInformationProvider;

        statesController.stateChanged.Subscribe(i =>
        {
            if (i == PlayerStatesController.States.AimingJump)
            {
                playerComponentsProvider.rigidBody.velocity = Vector3.zero;
            }
            else if (i == PlayerStatesController.States.Jumping)
            {
                playerComponentsProvider.rigidBody.constraints = RigidbodyConstraints.None;
            }
            else
            {
                playerComponentsProvider.rigidBody.constraints
                            = RigidbodyConstraints.FreezeRotationX
                             | RigidbodyConstraints.FreezeRotationZ;
            }

        });
    }

    private void Update()
    {
        if (statesController.state == PlayerStatesController.States.GameOver) return;

        //Debug.Log(transform.forward.normalized);
        //Debug.Log(statesController.state);
        if (Input.GetMouseButtonDown(0))
        {
            statesController.ChangeState(PlayerStatesController.States.AimingJump);
            joyStickInformationProvider.firstInput = Input.mousePosition;
        }

        if (joyStickInformationProvider.firstInput == null) return;

        if (Input.GetMouseButtonUp(0))
        {
            if (statesController.state == PlayerStatesController.States.AimingJump)
            {
                var jumpForce = playerComponentsProvider.jumpLineSimulator.CalculateThrowingForce();
                //Debug.Log(jumpForce);

                playerComponentsProvider.rigidBody.AddForce(jumpForce, ForceMode.Impulse);
                StartCoroutine(delayJudgeLand());
                statesController.ChangeState(PlayerStatesController.States.Jumping);
            }
        }

        ChangeRotation();
    }

    private IEnumerator delayJudgeLand()
    {
        isAbleToJudgeLand = false;

        yield return new WaitForSeconds(0.2f);

        isAbleToJudgeLand = true;
    }

    private void ChangeRotation()
    {
        if (Input.mousePosition == joyStickInformationProvider.beforeInput)
        {
            return;
        }

        if (statesController.state
            != PlayerStatesController.States.AimingJump)
            return;

        var roteDirection = Input.mousePosition - joyStickInformationProvider.firstInput.Value;

        var angle = Mathf.Atan2(roteDirection.x, roteDirection.y) * Mathf.Rad2Deg;

        if (angle < 0) angle += 360;

        var rotateAmount = new Vector3(0, angle, 0);

        //Debug.Log(angle);

        transform.localEulerAngles = rotateAmount;

        joyStickInformationProvider.beforeInput = Input.mousePosition;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (!collision.gameObject.CompareTag("Ground")) return;

        if (statesController.state
                != PlayerStatesController.States.Jumping) return;

        if (!isAbleToJudgeLand) return;

        statesController.ChangeState(PlayerStatesController.States.Idle);
        joyStickInformationProvider.firstInput = null;
    }
}


