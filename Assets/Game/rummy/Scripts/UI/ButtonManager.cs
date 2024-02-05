using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
{
    [SerializeField] private Button _homeBtt;

    private void OnEnable()
    {
        _homeBtt.onClick.AddListener(OnHome);
    }

    private void OnDisable()
    {
        _homeBtt.onClick.RemoveListener(OnHome);
    }

    void OnHome()
    {
        Screen.orientation = ScreenOrientation.Portrait;
        SceneManager.LoadScene(0);
    }
}
