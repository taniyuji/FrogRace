using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;

public class PlayerStatesController : MonoBehaviour
{
    private Subject<States> _stateChanged = new Subject<States>();

    public IObservable<States> stateChanged
    {
        get { return _stateChanged; }
    }

    [HideInInspector]
    public enum States
    {
        Running,
        AimingJump,
        Jumping,
        GameOver,
    }

    public States state { get; private set; } = States.Running;

    public void ChangeState(States targetState)
    {
        state = targetState;

        _stateChanged.OnNext(targetState);
    }
}
