using UnityEngine;
using UniRx;

public class CameraMover : MonoBehaviour
{
    [SerializeField]
    private PlayerComponentsProvider componentsProvider;

    [SerializeField]
    private float movesmoothness;

    [SerializeField]
    private float roteTorelateAmount;

    private PlayerStatesController statesController;

    private enum States
    {
        Nothing,
        Following,
        Rotating,
    }

    private States state = States.Following;

    private Vector3 beforePlayerPosition;

    private float playerBeforeYRote;

    private bool isAdjustRote = false;

    // Start is called before the first frame update
    void Start()
    {
        statesController = componentsProvider.playerStatesController;

        statesController.stateChanged.Subscribe(i =>
        {
            if (i == PlayerStatesController.States.AimingJump)
            {
                state = States.Rotating;
            }
            else if (i == PlayerStatesController.States.Jumping)
            {
                state = States.Following;
            }
            else if (i == PlayerStatesController.States.Idle)
            {
                isAdjustRote = true;
            }
            else if (i == PlayerStatesController.States.GameOver)
            {
                state = States.Nothing;
            }
        });

        beforePlayerPosition = componentsProvider.transform.position;
    }

    private void Update()
    {
        //RotateBehavior();
        FollowBehavior();
        //AdjustRote();
    }

    /*
    private void RotateBehavior()
    {
        if (state != States.Rotating) return;

        var roteYDif = playerBeforeYRote - componentsProvider.transform.localEulerAngles.y;

        if (Mathf.Abs(roteYDif) < roteTorelateAmount) return;

        transform.RotateAround(componentsProvider.transform.position, Vector3.up, -roteYDif);

        playerBeforeYRote = componentsProvider.transform.localEulerAngles.y;
    }
    */

    private void FollowBehavior()
    {
        if (state != States.Following) return;

        var playerPosDif = componentsProvider.transform.position - beforePlayerPosition;

        var targetPosition = transform.position + playerPosDif;

        transform.position = Vector3.Lerp(transform.position, targetPosition, movesmoothness);

        //transform.position += playerPosDif;

        beforePlayerPosition = componentsProvider.transform.position;

    }

    /*
    private void AdjustRote()
    {
        if (!isAdjustRote) return;

        if (transform.localEulerAngles == componentsProvider.transform.localEulerAngles)
        {
            isAdjustRote = false;
            Debug.Log("finishAdjusting");
            return;
        }

        var roteYDif = playerBeforeYRote - componentsProvider.transform.localEulerAngles.y;

        Debug.Log(roteYDif);

        if (Mathf.Abs(roteYDif) < roteTorelateAmount) return;

        transform.RotateAround(componentsProvider.transform.position, Vector3.up, -roteYDif);

        playerBeforeYRote = componentsProvider.transform.localEulerAngles.y;
    }
    */
}
