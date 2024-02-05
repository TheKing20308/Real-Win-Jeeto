using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PopUp_Exit : MonoBehaviour
{
    [SerializeField] public TMP_Text numSelec;
    [SerializeField] public TMP_Text amount;
    [SerializeField] private Button playAgain;
    [SerializeField] private Button home;

    private void OnEnable()
    {
        playAgain.onClick.AddListener(OnPlayAgain);
        home.onClick.AddListener(OnHome);
    }

    private void OnDisable()
    {
        playAgain.onClick.RemoveListener(OnPlayAgain);
        home.onClick.RemoveListener(OnHome);
    }

    void OnPlayAgain()
    {
        SceneManager.LoadScene(1);
    }

    void OnHome()
    {
        SceneManager.LoadScene(0);
    }
}
