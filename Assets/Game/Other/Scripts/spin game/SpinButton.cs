using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpinButton : MonoBehaviour
{
    private Button _btt;
    [SerializeField] private Button[] _btts;
    [SerializeField] private GameObject[] _bttsObject;

    private void Start()
    {
        _btt = GetComponent<Button>();
        _bttsObject = GameObject.FindGameObjectsWithTag("SpinBtt");

        for (int i = 0; i < 10; i++)
        {
            _btts[i] = _bttsObject[i].GetComponent<Button>();
        }
    }

    public void OnClick()
    {
        for (int i = 0; i < 10; i++)
        {
            _btts[i].interactable = false;
        }

        _btt.interactable = false;
    }

    public void onPlayAgain()
    {
        foreach (var button in _btts)
        {
            button.interactable = true;
        }

        _btt.interactable = false;
    }
}
