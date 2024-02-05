using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PopUp_Spin : MonoBehaviour
{
    [SerializeField] private TMP_Text txt;
    [SerializeField] private Button _playAgain;
    [SerializeField] private Button _quit;

    [SerializeField] private Roulette rou;

    [SerializeField] private SpinButton sBtt;

    private void OnEnable()
    {
        _playAgain.onClick.AddListener(OnPlay);
        _quit.onClick.AddListener(OnQuit);
    }

    private void OnDisable()
    {
        _playAgain.onClick.RemoveListener(OnPlay);
        _quit.onClick.RemoveListener(OnQuit);
    }

    private void Update()
    {
        txt.text = rou.gameEnd;
    }

    void OnPlay()
    {
        gameObject.SetActive(false);
        UIManager.ChangeScreen(UIManager.Screen.Spin);
        sBtt.onPlayAgain();
    }

    void OnQuit()
    {
        gameObject.SetActive(false);
        UIManager.ChangeScreen(UIManager.Screen.Home);
        sBtt.onPlayAgain();
    }
}
