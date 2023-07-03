using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;

public class EnemyStatesController : MonoBehaviour
{
    public enum States
    {
        Idle,
        MovingRight,
        MovingLeft,
    }

    public States state { get; private set; }

    private Subject<States> _statesChanged = new Subject<States>();

    public IObservable<States> statesChanged
    {
        get { return _statesChanged; }
    }

    public void ChangeStates(States target)
    {
        state = target;

        _statesChanged.OnNext(target);
    }
}
