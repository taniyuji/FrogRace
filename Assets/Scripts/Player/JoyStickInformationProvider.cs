using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class JoyStickInformationProvider : MonoBehaviour
{
    [SerializeField]
    private Joystick joystick;

    [HideInInspector]
    public Vector3? firstInput;

    [HideInInspector]
    public Vector3 beforeInput;

    public float GetCenterToNowPointDistance()
    {
        if (firstInput == null)
            return 0;
        else if (joystick.isMaxDistance)
        {
            return 1;
        }
        else
            return joystick.returnCenterToNowPointDistance();
    }
}
