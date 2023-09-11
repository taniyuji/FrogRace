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
    private float moveYPosition;

    [SerializeField]
    private float moveYSpeed;

    private Tweener dribbleTweener;


    private PlayerComponentsProvider componentsProvider;

    private Transform animationTransform;

    private Animator playerAnimator;

    private void Awake()
    {
        componentsProvider = GetComponent<PlayerComponentsProvider>();
    }

    // Start is called before the first frame update
    void Start()
    {
        animationTransform = componentsProvider.animationTransform;
        playerAnimator = componentsProvider.animator;

        componentsProvider.playerStatesController.stateChanged.Subscribe(i =>
        {
            if (i == PlayerStatesController.States.AimingJump)
            {
                Debug.Log("DrribleAgain");

                crouchAnimation();
            }
            else if (i == PlayerStatesController.States.Jumping)
            {
                floatingAnimation();
            }
            else if(i == PlayerStatesController.States.Land)
            {

            }
            else if (i == PlayerStatesController.States.GameOver)
            {
                animationTransform.gameObject.SetActive(false);
            }
            else
            {
                dribbleTweener.Kill();
                animationTransform.transform.localPosition = new Vector3(0, transform.localScale.y / 2, 0);
            }

        });
    }

    private void crouchAnimation()
    {
        playerAnimator.SetTrigger("Crouch");
    }

    private void floatingAnimation()
    {
        playerAnimator.SetTrigger("Floating");
    }
}
