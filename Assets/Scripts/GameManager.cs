using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private float gravityScale;

    void Awake()
    {
        Physics.gravity = new Vector3(0, -9.81f, 0) * gravityScale;
    }
}
