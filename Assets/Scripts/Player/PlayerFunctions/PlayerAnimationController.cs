using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UniRx;
using DG.Tweening;

public class PlayerAnimationController : MonoBehaviour
{
    [SerializeField]
    private float shakeStrength = 10;

    [SerializeField]
    private int shakeVibrato = 10;

    [SerializeField]
    private float shakeRandomness = 10;

    private PlayerComponentsProvider componentsProvider;

    private Transform meshTransform;

    private Animator playerAnimator;

    private Tweener shakeTweener;

    private void Awake()
    {
        componentsProvider = GetComponent<PlayerComponentsProvider>();
    }

    // Start is called before the first frame update
    void Start()
    {
        meshTransform = componentsProvider.meshTransform;
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
            else if (i == PlayerStatesController.States.Land)
            {
                LandingAnimation();
            }
            else if (i == PlayerStatesController.States.GameOver)
            {
                meshTransform.gameObject.SetActive(false);
            }
            else
            {
                meshTransform.transform.localPosition = new Vector3(0, transform.localScale.y / 2, 0);
            }

        });
    }

    private void crouchAnimation()
    {
        playerAnimator.SetTrigger("Crouch");

        shakeTweener = meshTransform.DOShakePosition(1, shakeStrength, shakeVibrato, shakeRandomness, false, false)
                                    .SetLoops(-1)
                                    .SetEase(Ease.Linear);
    }

    private void floatingAnimation()
    {
        playerAnimator.SetTrigger("Floating");

        shakeTweener.Kill();
    }

    private void LandingAnimation()
    {
        playerAnimator.SetTrigger("Landing");

        componentsProvider.playerStatesController.ChangeState(PlayerStatesController.States.Idle);
    }
}
