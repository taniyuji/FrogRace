using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class JumpGuideLineRenderer : MonoBehaviour
{
    [SerializeField]
    private PlayerComponentsProvider componentsProvider;

    private LineRenderer lineRenderer;

    private List<Vector3> linePositions = new List<Vector3>();

    void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();
    }

    // Start is called before the first frame update
    void Start()
    {


    }

    // Update is called once per frame
    void Update()
    {
        if (componentsProvider.playerStatesController.state
             != PlayerStatesController.States.AimingJump) return;

        linePositions.Clear();

        for (int i = 0; i < transform.childCount; i++)
        {
            //Debug.Log(transform.GetChild(i).name);
            if (!transform.GetChild(i).gameObject.activeSelf) continue;

            linePositions.Add(transform.GetChild(i).position);
        }

        linePositions.Add(componentsProvider.jumpTargetRenderer.transform.position);

        lineRenderer.positionCount = linePositions.Count;

        lineRenderer.SetPositions(linePositions.ToArray());
        Debug.Log("SetLinePositions" + lineRenderer.positionCount);
    }
}
