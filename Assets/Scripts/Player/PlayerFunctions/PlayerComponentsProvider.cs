using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerComponentsProvider : MonoBehaviour
{
    [SerializeField]
    private PlayerStatesController _playerStatesController;

    public PlayerStatesController playerStatesController
    {
        get { return _playerStatesController; }
    }

    [SerializeField]
    private PlayerMover _playerMover;

    public PlayerMover playerMover
    {
        get { return _playerMover; }
    }

    [SerializeField]
    private Rigidbody _rigidBody;

    public Rigidbody rigidBody
    {
        get { return _rigidBody; }
    }


    [SerializeField]
    private Animator _animator;

    public Animator animator
    {
        get { return _animator; }
    }

    [SerializeField]
    private Transform _animationTransform;

    public Transform animationTransform
    {
        get { return _animationTransform; }
    }

    [SerializeField]
    private JumpLineSimulator _jumpLineSimulator;

    public JumpLineSimulator jumpLineSimulator
    {
        get { return _jumpLineSimulator; }
    }

    [SerializeField]
    private JoyStickInformationProvider _joyStickInformationProvider;

    public JoyStickInformationProvider joyStickInformationProvider
    {
        get { return _joyStickInformationProvider; }
    }

    [SerializeField]
    private MeshRenderer _jumpTargetRenderer;

    public MeshRenderer jumpTargetRenderer
    {
        get { return _jumpTargetRenderer; }
    }
}
