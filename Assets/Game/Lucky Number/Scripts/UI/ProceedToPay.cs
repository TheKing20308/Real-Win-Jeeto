using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class ProceedToPay : MonoBehaviour
{
    private Button _btt;
    [SerializeField] private GameObject _popUp;
    
    private void OnValidate()
    {
        
    }

    private void OnEnable()
    {
        _btt = GetComponent<Button>();
        _btt.onClick.AddListener(OnClick);
    }

    private void OnDisable()
    {
        _btt.onClick.RemoveListener(OnClick);
    }

    void OnClick()
    {
        _btt.interactable = false;
        _popUp.SetActive(true);
        
    }
    
    
}
