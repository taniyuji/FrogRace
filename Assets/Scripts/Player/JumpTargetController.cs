using UnityEngine;
using UniRx;
using System;

public class JumpTargetController : MonoBehaviour
{
    [SerializeField]
    private Transform jumpTargetTransform;

    [SerializeField]
    private float moveSpeed;

    [SerializeField]
    private float maxDistance = 5;

    private PlayerComponentsProvider componentsProvider;

    private JoyStickInformationProvider joyStickInformationProvider;

    private float beforeDistance = 0;

    private bool isMinus = false;

    private Vector3 beforeJumpCenterPosition;

    private void Awake()
    {
        componentsProvider = GetComponent<PlayerComponentsProvider>();
    }

    void Start()
    {
        joyStickInformationProvider = componentsProvider.joyStickInformationProvider;

        componentsProvider.playerStatesController.stateChanged.Subscribe(i =>
        {
            if (componentsProvider.playerStatesController.state
                   == PlayerStatesController.States.AimingJump)
            {
                jumpTargetTransform.parent = transform;

                jumpTargetTransform.localEulerAngles = Vector3.zero;

                jumpTargetTransform.position = new Vector3(transform.position.x,
                                                             jumpTargetTransform.position.y,
                                                             transform.position.z);
                isMinus = false;
                beforeDistance = 0;

                jumpTargetTransform.gameObject.SetActive(true);

                beforeJumpCenterPosition = transform.position;
            }
            else if (componentsProvider.playerStatesController.state
                        == PlayerStatesController.States.Jumping)
            {
                jumpTargetTransform.parent = null;
            }
            else if (componentsProvider.playerStatesController.state
                        == PlayerStatesController.States.Idle)
            {
                jumpTargetTransform.gameObject.SetActive(false);
                beforeDistance = 0;
            }
        });

        jumpTargetTransform.gameObject.SetActive(false);
    }


    void Update()
    {
        MoveJumpTarget();

        //Debug.Log("centerToNow:" + componentsProvider.joyStickInformationProvider.GetCenterToNowPointDistance());
    }

    private void MoveJumpTarget()
    {
        if (componentsProvider.playerStatesController.state
            != PlayerStatesController.States.AimingJump) return;

        var nowDistance = joyStickInformationProvider.GetCenterToNowPointDistance();

        if (beforeDistance == nowDistance) return;

        isMinus = beforeDistance > nowDistance;

        var fixedMoveSpeed = isMinus ? moveSpeed * (beforeDistance - nowDistance) : moveSpeed * nowDistance;

        var direction = transform.forward;

        if (!isMinus)
            jumpTargetTransform.position = beforeJumpCenterPosition + direction * fixedMoveSpeed;
        else
            jumpTargetTransform.position -= direction * fixedMoveSpeed;

        beforeDistance = nowDistance;
    }
}
