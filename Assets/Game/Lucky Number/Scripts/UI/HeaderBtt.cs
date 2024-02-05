using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HeaderBtt : MonoBehaviour
{
    [SerializeField] private Button _home;

    private void OnEnable()
    {
        _home.onClick.AddListener(OnHome);
    }

    private void OnDisable()
    {
        _home.onClick.RemoveListener(OnHome);
    }

    void OnHome()
    {
        SceneManager.LoadScene(0);
    }
}
