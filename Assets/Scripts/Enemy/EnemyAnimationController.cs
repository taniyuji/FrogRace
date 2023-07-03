using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class EnemyAnimationController : MonoBehaviour
{
    [SerializeField]
    private Animator animator;

    private EnemyStatesController statesController;

    private void Awake()
    {
        statesController = GetComponent<EnemyStatesController>();
    }

    // Start is called before the first frame update
    void Start()
    {
        statesController.statesChanged.Subscribe(i =>
        {
            if (i == EnemyStatesController.States.MovingLeft)
                animator.SetBool("IsMoveRight", false);
            else if (i == EnemyStatesController.States.MovingRight)
                animator.SetBool("IsMoveRight", true);
        });

        if (statesController.state == EnemyStatesController.States.MovingLeft)
            animator.Play("MoveLeft");
        else if (statesController.state == EnemyStatesController.States.MovingRight)
            animator.Play("MoveRight");

    }
}
