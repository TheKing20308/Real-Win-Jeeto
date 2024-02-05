using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class MainConfirm : MonoBehaviour
{
    private Button _btt;
    
    [SerializeField] private Button _proceed;
    [SerializeField] public List <Button> _numButtons;

    [SerializeField] private GameObject shit;

    private void OnEnable()
    {
        _btt = GetComponent<Button>();
        _btt.onClick.AddListener(OnClick);
        
    }

    private void OnDisable()
    {
        _btt.onClick.RemoveListener(OnClick);
    }

    [ContextMenu("Get Shit")]
    private void GetAllShit()
    {
        foreach (Transform shitex in shit.transform)
        {
            var poop = shitex.GetComponent<Button>();
            _numButtons.Add(poop);
        }
    }

    void OnClick()
    {
        _btt.interactable = false;
        _proceed.interactable = true;
        foreach (var btt in _numButtons)
        {
            btt.interactable = false;
        }
    }
}
