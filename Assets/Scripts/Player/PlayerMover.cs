using UnityEngine;
using DG.Tweening;
using UniRx;
using System;
using System.Collections;

public class PlayerMover : MonoBehaviour
{
    [SerializeField]
    private Joystick joystick;

    [SerializeField]
    private float moveSpeed;

    [SerializeField]
    private float runningJudgeAmount = 0.2f;

    [SerializeField]
    private float aimingJumpJudgeAmount;

    [SerializeField]
    private float rotationSpeed = 1f;

    [SerializeField]
    private Transform firstStageTopTransform;

    public Vector3 lookDirection { get; private set; }

    private PlayerComponentsProvider playerComponentsProvider;

    private PlayerStatesController statesController;

    private Vector3 firstInput;   

    private bool canJudgeLand = false;

    private float beforeJoyStickVerticalValue;

    private void Awake()
    {
        playerComponentsProvider = GetComponent<PlayerComponentsProvider>();
    }

    // Start is called before the first frame update
    void Start()
    {
        statesController = playerComponentsProvider.playerStatesController;

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

    // Update is called once per frame
    void FixedUpdate()
    {
        if (statesController.state != PlayerStatesController.States.Running) return;        

        if(transform.localEulerAngles != lookDirection)
            transform.DORotate(lookDirection, 0.1f);

        //Debug.Log("Running");

        var moveAmount = new Vector3(0, playerComponentsProvider.rigidBody.velocity.y, 0);

        if (Mathf.Abs(transform.forward.normalized.z) >= 0.5f)
        {
            if (transform.forward.normalized.z > 0)
            {
                if (Mathf.Abs(joystick.Horizontal) > runningJudgeAmount)
                    moveAmount.x = joystick.Horizontal > 0 ? moveSpeed : -moveSpeed;
                else
                    moveAmount.x = 0;

                moveAmount.z = moveSpeed;
            }
            else
            {
                if (Mathf.Abs(joystick.Horizontal) > runningJudgeAmount)
                    moveAmount.x = joystick.Horizontal > 0 ? -moveSpeed : moveSpeed;
                else
                    moveAmount.x = 0;

                moveAmount.z = -moveSpeed;
            }
        }
        else
        {
            if (transform.forward.normalized.x > 0)
            {
                if (Mathf.Abs(joystick.Horizontal) > runningJudgeAmount)
                    moveAmount.z = joystick.Horizontal > 0 ? -moveSpeed : moveSpeed;
                else
                    moveAmount.z = 0;

                moveAmount.x = moveSpeed;
            }
            else
            {
                if (Mathf.Abs(joystick.Horizontal) > runningJudgeAmount)
                    moveAmount.z = joystick.Horizontal > 0 ? moveSpeed : -moveSpeed;
                else
                    moveAmount.z = 0;

                moveAmount.x = -moveSpeed;
            }
        }

        playerComponentsProvider.rigidBody.velocity = moveAmount;
    }

    private void Update()
    {
        if (statesController.state == PlayerStatesController.States.GameOver) return;

        //Debug.Log(transform.forward.normalized);
        //Debug.Log(statesController.state);
        if (Input.GetMouseButtonDown(0))
            firstInput = Input.mousePosition;

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

        if (joystick.Vertical < aimingJumpJudgeAmount
                && statesController.state != PlayerStatesController.States.AimingJump)            
        {
            statesController.ChangeState(PlayerStatesController.States.AimingJump);         
            //Debug.Log("GoAiming");
        }

        ChangeRotation();
    }

    private IEnumerator delayJudgeLand()
    {
        canJudgeLand = false;

        yield return new WaitForSeconds(0.2f);

        canJudgeLand = true;
    }

    private void ChangeRotation()
    {
        if (Input.mousePosition == firstInput) return;

        if (statesController.state
            != PlayerStatesController.States.AimingJump)
            return;

        if (joystick.Vertical > 0)
        {            
            return;
        }            

        var roteDirection = firstInput - Input.mousePosition;

        roteDirection = new Vector3(roteDirection.x, 0, roteDirection.y);                                                

        var targetRotation = Quaternion.LookRotation(roteDirection) * Quaternion.Euler(lookDirection);
        
        transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, rotationSpeed);        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (!collision.gameObject.CompareTag("Ground")) return;

        if (statesController.state
                != PlayerStatesController.States.Jumping) return;

        if (!canJudgeLand) return;

        if (statesController.state
                != PlayerStatesController.States.Running)
        {
            var stageTopPosition = collision.transform.parent.position;

            playerComponentsProvider.rigidBody.velocity = Vector3.zero;

            var fixedStageTopPosition = stageTopPosition;

            var distance = stageTopPosition - transform.position;

            if(Mathf.Abs(distance.x) > Mathf.Abs(distance.z))
            {
                if (distance.x > 0)
                    lookDirection = new Vector3(0, 90, 0);
                else
                    lookDirection = new Vector3(0, -90, 0);
            }
            else
            {
                if (distance.z > 0)
                    lookDirection = Vector3.zero;
                else
                    lookDirection = new Vector3(0, 180, 0);
            }

            transform.DORotate(lookDirection, 0.1f);

            statesController.ChangeState(PlayerStatesController.States.Running);

            //Debug.Log(collision.transform.parent.name);
        }
    }
}


