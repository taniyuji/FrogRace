using UnityEngine;
using UniRx;

public class CameraMover : MonoBehaviour
{
    [SerializeField]
    private PlayerComponentsProvider playerComponentsProvider;

    [SerializeField]
    private float moveSmoothness;

    [SerializeField]
    private float roteTolerateAmount;

    [SerializeField]
    private float zoomSpeed;

    private PlayerStatesController statesController;

    private enum States
    {
        Nothing,
        Following,
        CanZoom,
        ZoomingIn,
        ZoomingOut,
    }

    private States state = States.Following;

    private Vector3 beforePlayerPosition;

    private Vector3 defaultCameraPosition;

    private Vector3 zoomVector;

    private float playerBeforeYRote;

    private bool isAdjustRote = false;

    private Vector3 beforeTargetPosition;

    // Start is called before the first frame update
    void Start()
    {
        statesController = playerComponentsProvider.playerStatesController;

        defaultCameraPosition = transform.position;

        zoomVector
         = (playerComponentsProvider.transform.position - transform.position).normalized;

        statesController.stateChanged.Subscribe(i =>
        {
            if (i == PlayerStatesController.States.AimingJump)
            {
                state = States.CanZoom;
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

        beforePlayerPosition = playerComponentsProvider.transform.position;
    }

    private void Update()
    {
        FollowBehavior();
        ZoomOutBehavior();
    }

    private void FollowBehavior()
    {
        if (state != States.Following) return;

        var playerPosDif = playerComponentsProvider.transform.position - beforePlayerPosition;

        var targetPosition = transform.position + playerPosDif;

        transform.position = Vector3.Lerp(transform.position, targetPosition, moveSmoothness);

        //transform.position += playerPosDif;

        beforePlayerPosition = playerComponentsProvider.transform.position;
    }

    private void ZoomOutBehavior()
    {
        if (state != States.CanZoom) return;

        if (IsBoundsInView(Camera.main, playerComponentsProvider.jumpTargetRenderer)) return;

        //if (playerComponentsProvider.jumpTargetRenderer.isVisible) return;

        Debug.Log("ZoomingOut");

        var targetPosition = transform.position + (zoomSpeed * Time.deltaTime * -zoomVector);

        transform.position = Vector3.Lerp(transform.position, targetPosition, moveSmoothness);

        beforeTargetPosition = playerComponentsProvider.jumpTargetRenderer.transform.position;
    }

    private void ZoomInBehavior()
    {
        var targetPosition = Vector3.MoveTowards(transform.position, defaultCameraPosition, 1);

        transform.position = Vector3.Lerp(transform.position, targetPosition, moveSmoothness);
    }

    public bool IsBoundsInView(Camera camera, Renderer renderer)
    {
        Vector3[] vertices = new Vector3[8];
        Bounds bounds = renderer.bounds;

        // Calculate the vertices of the bounding box
        vertices[0] = bounds.min;
        vertices[1] = new Vector3(bounds.min.x, bounds.min.y, bounds.max.z);
        vertices[2] = new Vector3(bounds.min.x, bounds.max.y, bounds.min.z);
        vertices[3] = new Vector3(bounds.min.x, bounds.max.y, bounds.max.z);
        vertices[4] = new Vector3(bounds.max.x, bounds.min.y, bounds.min.z);
        vertices[5] = new Vector3(bounds.max.x, bounds.min.y, bounds.max.z);
        vertices[6] = new Vector3(bounds.max.x, bounds.max.y, bounds.min.z);
        vertices[7] = bounds.max;

        // Check each vertex to see if it's inside the camera's view
        for (int i = 0; i < vertices.Length; i++)
        {
            Vector3 v = camera.WorldToViewportPoint(vertices[i]);

            if (v.x < 0 || v.x > 1 || v.y < 0 || v.y > 1 || v.z < 0)
            {
                return false;
            }
        }

        return true;
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
