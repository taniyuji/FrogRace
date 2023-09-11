using UnityEngine;
using UniRx;

public class CameraMover : MonoBehaviour
{
    [SerializeField]
    private PlayerComponentsProvider playerComponentsProvider;

    [SerializeField]
    private float moveSmoothness;

    [SerializeField]
    private float adjustSpeedAmount;

    [SerializeField]
    private float tolerateMinSpeed;

    [SerializeField]
    private float afterJumpResetSpeed;

    private PlayerStatesController statesController;

    private enum States
    {
        Nothing,
        FollowingAndResetting,
        Following,
        CanZoom,
        CanNotZoom,
    }

    private States state = States.Following;

    private Vector3 beforePlayerPosition;

    private float defaultPlayerToCameraDistance;

    private Vector3 zoomVector;

    private float maxZoomOutSpeed;

    // Start is called before the first frame update
    void Start()
    {
        statesController = playerComponentsProvider.playerStatesController;

        defaultPlayerToCameraDistance
         = Vector3.Distance(playerComponentsProvider.transform.position, transform.position);

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
                state = States.FollowingAndResetting;
            }
            else if (i == PlayerStatesController.States.Idle)
            {

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
        ZoomBehavior();
        ResetCameraDistance();
        /*
        if (state != States.CanZoom) return;

        var roteYDiff = playerComponentsProvider.transform.localEulerAngles.y - transform.localEulerAngles.y;

        if (Mathf.Abs(roteYDiff) > 90) roteYDiff = roteYDiff > 0 ? roteYDiff - 360 : roteYDiff + 360;

        Debug.Log(roteYDiff);

        transform.RotateAround(playerComponentsProvider.transform.position, Vector3.up, roteYDiff * 0.01f);
        */
    }

    private void FollowBehavior()
    {
        if (state != States.Following && state != States.FollowingAndResetting) return;

        var playerPosDif = playerComponentsProvider.transform.position - beforePlayerPosition;

        var targetPosition = transform.position + playerPosDif;

        transform.position = Vector3.Lerp(transform.position, targetPosition, moveSmoothness);

        //transform.position += playerPosDif;

        beforePlayerPosition = playerComponentsProvider.transform.position;
    }

    private void ResetCameraDistance()
    {
        if (state != States.FollowingAndResetting) return;

        if (Vector3.Distance(playerComponentsProvider.transform.position, transform.position)
           <= defaultPlayerToCameraDistance)
        {
            state = States.Following;
            return;
        }

        var targetPosition = transform.position + (afterJumpResetSpeed * Time.deltaTime * zoomVector);

        transform.position = Vector3.Lerp(transform.position, targetPosition, moveSmoothness);
    }

    private void ZoomBehavior()
    {
        if (state != States.CanZoom) return;

        var fixedZoomVector = zoomVector;

        var vertices = GetBoundsVertices(playerComponentsProvider.jumpTargetRenderer);

        var fixedZoomSpeed = 0f;

        if (IsBoundsInView(Camera.main, vertices))
        {
            if (Vector3.Distance(playerComponentsProvider.transform.position, transform.position)
                <= defaultPlayerToCameraDistance) return;

            fixedZoomSpeed = CalculateZoomingSpeed(vertices, true);
            //Debug.Log("ZoomingIn");
        }
        else
        {
            fixedZoomVector *= -1;

            fixedZoomSpeed = CalculateZoomingSpeed(vertices, false);
            //Debug.Log("ZoomingOut");
        }

        //Debug.Log(fixedZoomSpeed);
        if (fixedZoomSpeed < tolerateMinSpeed) return;

        var targetPosition = transform.position + (fixedZoomSpeed * Time.deltaTime * fixedZoomVector);
        //Debug.Log(fixedZoomSpeed);

        transform.position = Vector3.Lerp(transform.position, targetPosition, moveSmoothness);
    }

    private Vector3[] GetBoundsVertices(Renderer renderer)
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

        return vertices;
    }

    public bool IsBoundsInView(Camera camera, Vector3[] vertices)
    {
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

    private float CalculateZoomingSpeed(Vector3[] vertices, bool isBoundsInView)
    {
        //zoomOutが開始されたら逐次maxZoomOutSpeedを更新
        //全てのboundsが画面内に入って初めてmaxZoomOutSpeedを初期化
        var speedAmount = 0.0f;

        if (isBoundsInView)
        {
            for (int i = 0; i < vertices.Length; i++)
            {
                Vector3 v = Camera.main.WorldToViewportPoint(vertices[i]);

                //画面の右半分、横半分どのポジションでも0~1の値を返す
                var fixedVertices
                     = new Vector2(v.x > 0.5f ? 1 - v.x : v.x, v.y > 0.5f ? 1 - v.y : 0.5f) * 10;

                speedAmount += fixedVertices.x;
            }

            maxZoomOutSpeed = 0;
        }
        else
        {
            for (int i = 0; i < vertices.Length; i++)
            {
                Vector3 v = Camera.main.WorldToViewportPoint(vertices[i]);

                var fixedVertices
                   = new Vector2(Mathf.Abs(v.x) % 10, Mathf.Abs(v.y) % 10) * 10;

                if (0 <= v.x && v.x <= 1)
                {
                    fixedVertices.x = 0;
                }
                else if (0 <= v.y && v.y <= 1)
                {
                    fixedVertices.y = 0;
                }

                speedAmount += fixedVertices.x > fixedVertices.y
                    ? fixedVertices.x : fixedVertices.y;
            }

            if (maxZoomOutSpeed < speedAmount)
                maxZoomOutSpeed = speedAmount;
            else
                speedAmount = maxZoomOutSpeed;
        }

        //Debug.Log("SpeedAmount:" + speedAmount);
        return speedAmount * adjustSpeedAmount;
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
