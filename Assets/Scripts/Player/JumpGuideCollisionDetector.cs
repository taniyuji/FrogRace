using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;

public class JumpGuideCollisionDetector : MonoBehaviour
{
    private Subject<float> _hitGround = new Subject<float>();

    public IObservable<float> hitGround { get { return _hitGround; } }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (!other.gameObject.CompareTag("Ground"))
        {
            return;
        }

        var otherYPosition = other.transform.position.y + (other.transform.localScale.y / 2);

        _hitGround.OnNext(otherYPosition);
    }
}
