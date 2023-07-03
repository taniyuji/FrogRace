using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UniRx;

public class ResetButton : MonoBehaviour
{
    [SerializeField]
    private PlayerComponentsProvider componentsProvider;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }

    private void Start()
    {
        componentsProvider.playerStatesController.stateChanged.Subscribe(i =>
        {
            if(i == PlayerStatesController.States.GameOver)
                Reset();
        });
    }

    public void Reset()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
