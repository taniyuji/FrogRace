using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UniRx;

public class PlayerAnimationController : MonoBehaviour
{
    [SerializeField]
    private float shakeStrength = 10;

    [SerializeField]
    private float dribbleYPosition;

    [SerializeField]
    private float boundSpeed;

    private Tweener dribbleTweener;

    private PlayerComponentsProvider componentsProvider;

    private MeshRenderer meshRenderer;

    private void Awake()
    {
        componentsProvider = GetComponent<PlayerComponentsProvider>();
    }

    // Start is called before the first frame update
    void Start()
    {        
        meshRenderer = componentsProvider.meshRenderer;

        componentsProvider.playerStatesController.stateChanged.Subscribe(i =>
        {            
            if(i == PlayerStatesController.States.Idle)
            {
                Debug.Log("DrribleAgain");

                playDribbleAnimation();                              
            }
            else if(i == PlayerStatesController.States.GameOver)
            {
                meshRenderer.gameObject.SetActive(false);
            }
            else
            {               
                dribbleTweener.Kill();
                meshRenderer.transform.localPosition = Vector3.zero;
            }

        });

        playDribbleAnimation();
    }

    private void playDribbleAnimation()
    {               
        dribbleTweener = (meshRenderer.transform
                               .DOLocalMove(new Vector3(0, dribbleYPosition, 0), boundSpeed)
                               .SetLoops(-1, LoopType.Yoyo))
                               .SetEase(Ease.InSine);        
    }
}
