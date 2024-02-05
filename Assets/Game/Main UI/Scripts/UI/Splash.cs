using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Splash : MonoBehaviour
{
    [SerializeField] private Button _continue;
    private void OnEnable()
    {
        _continue.onClick.AddListener(OnContinue);
    }

    private void OnDisable()
    {
        _continue.onClick.RemoveListener(OnContinue);
    }

    void OnContinue()
    {
        UIManager.ChangeScreen(UIManager.Screen.SignIn);
    }
}
