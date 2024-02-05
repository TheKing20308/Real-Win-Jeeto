using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class GameOverButton : MonoBehaviour
{
    [SerializeField] private Button _home;
    [SerializeField] private Button _restart;
    [SerializeField] private TMP_Text _playerWon;

    private void OnEnable()
    {
        _home.onClick.AddListener(OnHome);
        _restart.onClick.AddListener(OnRestart);
    }

    private void OnDisable()
    {
        _home.onClick.RemoveListener(OnHome);
        _restart.onClick.RemoveListener(OnRestart);
    }

    void OnHome()
    {
        SceneManager.LoadScene(0);
        
    }

    void OnRestart()
    {
        SceneManager.LoadScene(4);
    }
}
