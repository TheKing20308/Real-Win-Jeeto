using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class NumberSelectUp : MonoBehaviour
{
    [SerializeField] private Button ten;
    [SerializeField] private Button twenty;
    [SerializeField] private Button thirty;
    [SerializeField] private Button sixty;
    [SerializeField] private Button seventy;

    [SerializeField] private Button Spin;

    [SerializeField] private NumberSelectDown nsd;
    private void OnEnable()
    {
        ten.onClick.AddListener(OnTen);
        twenty.onClick.AddListener(OnTwenty);
        thirty.onClick.AddListener(OnThirty);
        sixty.onClick.AddListener(OnSixty);
        seventy.onClick.AddListener(OnSeventy);
    }

    private void OnDisable()
    {
        ten.onClick.RemoveListener(OnTen);
        twenty.onClick.RemoveListener(OnTwenty);
        thirty.onClick.RemoveListener(OnThirty);
        sixty.onClick.RemoveListener(OnSixty);
        seventy.onClick.RemoveListener(OnSeventy);
    }

    void OnTen()
    {
        nsd.numSelect = 10;
        Debug.Log("Player selected:" + nsd.numSelect);
        Spin.interactable = true;
    }
    void OnTwenty()
    {
        nsd.numSelect = 20;
        Debug.Log("Player selected:" + nsd.numSelect);
        Spin.interactable = true;
    }
    void OnThirty()
    {
        nsd.numSelect = 30;
        Debug.Log("Player selected:" + nsd.numSelect);
        Spin.interactable = true;
    }
    void OnSixty()
    {
        nsd.numSelect = 60;
        Debug.Log("Player selected:" + nsd.numSelect);
        Spin.interactable = true;
    }
    void OnSeventy()
    {
        nsd.numSelect = 70;
        Debug.Log("Player selected:" + nsd.numSelect);
        Spin.interactable = true;
    }
}
