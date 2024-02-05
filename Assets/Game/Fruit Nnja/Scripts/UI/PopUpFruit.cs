using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PopUpFruit : MonoBehaviour
{
    [SerializeField] private Button playAgain;
    [SerializeField] private Button home;

    private void OnEnable()
    {
        playAgain.onClick.AddListener(PlayAgain);
        home.onClick.AddListener(Home);
    }

    private void OnDisable()
    {
        playAgain.onClick.RemoveListener(PlayAgain);
        home.onClick.RemoveListener(Home);
    }

    void PlayAgain()
    {
        gameObject.SetActive(false);
        FruitNinja.GameManager.Instance.NewGame();
    }

    void Home()
    {
        SceneManager.LoadScene(0);
    }
}
