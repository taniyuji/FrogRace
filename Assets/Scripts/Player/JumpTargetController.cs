using UnityEngine;
using UniRx;

public class JumpTargetController : MonoBehaviour
{
    [SerializeField]
    private Transform jumpTargetTransform;

    [SerializeField]
    private float moveSpeed;

    [SerializeField]
    private float maxDistance = 5;

    private PlayerComponentsProvider componentsProvider;

    private float moveDistanceCounter = 0;

    private bool isMinus = false;

    private void Awake()
    {
        componentsProvider = GetComponent<PlayerComponentsProvider>();
    }
    
    void Start()
    {
        componentsProvider.playerStatesController.stateChanged.Subscribe(i =>
        {
            if (componentsProvider.playerStatesController.state
                   == PlayerStatesController.States.AimingJump)
            {
                jumpTargetTransform.position = new Vector3(transform.position.x,
                                                             jumpTargetTransform.position.y,
                                                             transform.position.z);
                isMinus = false;
                moveDistanceCounter = 0;

                jumpTargetTransform.gameObject.SetActive(true);
            }
            else
            {
                jumpTargetTransform.gameObject.SetActive(false);
                moveDistanceCounter = 0;
            }
        });

        jumpTargetTransform.gameObject.SetActive(false);
    }

    
    void Update()
    {
        if (moveDistanceCounter > maxDistance)
        {
            moveDistanceCounter = 0;

            isMinus = !isMinus;

            return;
        }

        if(componentsProvider.playerStatesController.state != PlayerStatesController.States.AimingJump) return;
        
        var fixedMoveSpeed = isMinus ? -moveSpeed * Time.deltaTime : moveSpeed * Time.deltaTime;

        jumpTargetTransform.position += transform.forward.normalized * fixedMoveSpeed;

        moveDistanceCounter += Mathf.Abs(fixedMoveSpeed);            
    }
}
