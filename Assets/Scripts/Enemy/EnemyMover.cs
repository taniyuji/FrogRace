using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMover : MonoBehaviour
{
    [SerializeField]
    private float moveAmount;

    [SerializeField]
    private float moveSpeed;

    [SerializeField]
    private bool isMovingRight;

    [SerializeField]
    private bool isMovingLeft;

    [SerializeField]
    private EnemyStatesController statesController;

    private float moveAmountCounter;

    // Start is called before the first frame update
    void Awake()
    {
        if (!isMovingRight && !isMovingLeft) return;

        if (isMovingRight)
            statesController.ChangeStates(EnemyStatesController.States.MovingRight);
        else
            statesController.ChangeStates(EnemyStatesController.States.MovingLeft);
    }

    // Update is called once per frame
    void Update()
    {
        if (!isMovingRight && !isMovingLeft) return;

        if(moveAmountCounter > moveAmount)
        {
            if (statesController.state == EnemyStatesController.States.MovingRight)
                statesController.ChangeStates(EnemyStatesController.States.MovingLeft);
            else
                statesController.ChangeStates(EnemyStatesController.States.MovingRight);

            moveAmountCounter = 0;

            Debug.Log("changeMovingDirection");
        }


        var fixedMoveAmount = statesController.state == EnemyStatesController.States.MovingRight ?
            -moveSpeed * Time.deltaTime : moveSpeed * Time.deltaTime;

        transform.localPosition += new Vector3(fixedMoveAmount, 0, 0);

        moveAmountCounter += Mathf.Abs(fixedMoveAmount);
    }
}
