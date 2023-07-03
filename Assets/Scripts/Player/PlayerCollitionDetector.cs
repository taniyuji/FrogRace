using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerCollitionDetector : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI scoreText;

    private PlayerComponentsProvider componentsProvider;

    private PlayerStatesController statesController;

    private int scoreCounter = 0;

    private void Awake()
    {
        componentsProvider = GetComponent<PlayerComponentsProvider>();
    }

    private void Start()
    {
        statesController = componentsProvider.playerStatesController;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Obstacle"))
        {
            statesController.ChangeState(PlayerStatesController.States.GameOver);
            Debug.Log("GameOver");
        }        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("GetPoint"))
        {
            scoreCounter++;

            scoreText.text = scoreCounter.ToString();
            Debug.Log("Goal!");
        }
    }
}
