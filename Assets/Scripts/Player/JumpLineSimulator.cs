using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class JumpLineSimulator : MonoBehaviour
{
    /// <summary>
    /// 射出するオブジェクト
    /// </summary>
    [SerializeField, Tooltip("射出するオブジェクトをここに割り当てる")]
    private Rigidbody throwingRigidBody;

    /// <summary>
    /// 標的のオブジェクト
    /// </summary>
    [SerializeField, Tooltip("標的のオブジェクトをここに割り当てる")]
    private GameObject TargetObject;

    /// <summary>
    /// 射出角度
    /// </summary>
    [SerializeField, Range(0F, 90F), Tooltip("射出する角度")]
    private float ThrowingAngle;

    [SerializeField]
    private Transform guidesParent;

    [SerializeField]
    private int guideAmount;

    [SerializeField]
    private float guidesInterval = -3f;

    private List<GameObject> guideList = new List<GameObject>();

    private PlayerComponentsProvider componentsProvider;

    private void Awake()
    {
        componentsProvider = GetComponent<PlayerComponentsProvider>();
    }

    private void Start()
    {
        for (int i = 0; i < guideAmount; i++)
        {            
            guideList.Add(Instantiate(throwingRigidBody.gameObject, guidesParent.transform)) ;
        }

        componentsProvider.playerStatesController.stateChanged.Subscribe(i =>
        {                            
            if(i == PlayerStatesController.States.AimingJump)
                guidesParent.gameObject.SetActive(true);
            else
                guidesParent.gameObject.SetActive(false);
        });

        guidesParent.gameObject.SetActive(false);
    }

    private void Update()
    {
        var speed = CalculateThrowingForce();

        // プロット数に応じて、各プロットの時刻をリストに格納
        List<float> timeProtsList = GetTimeProtsList(speed, Physics.gravity, guideAmount);

        // リストの検証
        if (timeProtsList == null || timeProtsList.Count == 0)
        {
            return;
        }

        // 時刻リストを元に、プロットするガイドの位置を設定
        for (int i = 0; i < guideAmount; i++)
        {

            // リストから時刻の値を取り出す
            float time = timeProtsList[i];

            var expectedPosition = GetExpectedPosition(transform.position, speed, Physics.gravity, time);

            if (expectedPosition.y < TargetObject.transform.position.y)
            {
                //guideList[i].gameObject.SetActive(false);
            }
            else
            {
                guideList[i].gameObject.SetActive(true);
                guideList[i].transform.position = expectedPosition;
            }
        }
    }

    private List<float> GetTimeProtsList(Vector3 speed, Vector3 gravity, int prots)
    {
        // 斜方投射後、地面に到達する時刻を計算
        float landingTime = guidesInterval * speed.y / gravity.y;

        // 時刻格納用のリストを作成
        List<float> timeProtsList = new List<float>();

        // ガイドのプロット数が0なら作成直後の長さ0のリストを返す
        if (prots <= 0)
        {
            return timeProtsList;
        }

        // プロット数に応じて、ガイドを表示する位置を計算するための時刻をリストに追加
        for (int i = 1; i <= prots; i++)
        {
            float timeProt = i * landingTime / prots;
            timeProtsList.Add(timeProt);
        }
        return timeProtsList;
    }


    Vector3 GetExpectedPosition(Vector3 startPos, Vector3 speed, Vector3 gravity, float time)
    {
        // 時刻を元に、ガイドの位置を計算する
        Vector3 position = (speed * time) + (gravity * 0.5f * Mathf.Pow(time, 2));
        Vector3 guidePos = startPos + position;
        return guidePos;
    }

    /// <summary>
    /// ボールを射出する
    /// </summary>
    public Vector3 CalculateThrowingForce()
    {
        if (throwingRigidBody != null && TargetObject != null)
        {
            // 標的の座標
            Vector3 targetPosition = TargetObject.transform.position;

            // 射出角度
            float angle = ThrowingAngle;

            // 射出速度を算出
            Vector3 velocity = CalculateVelocity(this.transform.position, targetPosition, angle);

            return velocity * throwingRigidBody.mass;
        }
        else
        {
            throw new System.Exception("射出するオブジェクトまたは標的のオブジェクトが未設定です。");
        }
    }

    /// <summary>
    /// 標的に命中する射出速度の計算
    /// </summary>
    /// <param name="pointA">射出開始座標</param>
    /// <param name="pointB">標的の座標</param>
    /// <returns>射出速度</returns>
    private Vector3 CalculateVelocity(Vector3 pointA, Vector3 pointB, float angle)
    {
        // 射出角をラジアンに変換
        float rad = angle * Mathf.PI / 180;

        // 水平方向の距離x
        float z = Vector3.Distance(new Vector2(pointA.x, pointA.z), new Vector2(pointB.x, pointB.z));

        // 垂直方向の距離y
        float y = pointA.y - pointB.y;

        // 斜方投射の公式を初速度について解く
        float speed = Mathf.Sqrt(-Physics.gravity.y * Mathf.Pow(z, 2) / (2 * Mathf.Pow(Mathf.Cos(rad), 2) * (z * Mathf.Tan(rad) + y)));

        if (float.IsNaN(speed))
        {
            // 条件を満たす初速を算出できなければVector3.zeroを返す
            return Vector3.zero;
        }
        else
        {
            return (new Vector3(pointB.x - pointA.x, z * Mathf.Tan(rad), pointB.z - pointA.z).normalized * speed);
        }
    }
}
