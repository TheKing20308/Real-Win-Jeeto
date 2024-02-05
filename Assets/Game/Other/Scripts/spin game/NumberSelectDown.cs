using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NumberSelectDown : MonoBehaviour
{
    [SerializeField] private Button nine;
    [SerializeField] private Button fifteen;
    [SerializeField] private Button two;
    [SerializeField] private Button four;
    [SerializeField] private Button five;
    
    [SerializeField] private Button Spin;

    public ColorChange ColorChange = null;

    public int numSelect;
    private void OnEnable()
    {
        nine.onClick.AddListener(OnTen);
        fifteen.onClick.AddListener(OnTwenty);
        two.onClick.AddListener(OnThirty);
        four.onClick.AddListener(OnSixty);
        five.onClick.AddListener(OnSeventy);
    }

    private void OnDisable()
    {
        nine.onClick.RemoveListener(OnTen);
        fifteen.onClick.RemoveListener(OnTwenty);
        two.onClick.RemoveListener(OnThirty);
        four.onClick.RemoveListener(OnSixty);
        five.onClick.RemoveListener(OnSeventy);
    }

    void OnTen()
    {
        numSelect = 90;
        Debug.Log("Player selected:" + numSelect);
        Spin.interactable = true;
    }
    void OnTwenty()
    {
        numSelect = 150;
        Debug.Log("Player selected:" + numSelect);
        Spin.interactable = true;
    }
    void OnThirty()
    {
        numSelect = 200;
        Debug.Log("Player selected:" + numSelect);
        Spin.interactable = true;
    }
    void OnSixty()
    {
        numSelect = 400;
        Debug.Log("Player selected:" + numSelect);
        Spin.interactable = true;
    }
    void OnSeventy()
    {
        numSelect = 500;
        Debug.Log("Player selected:" + numSelect);
        Spin.interactable = true;
    }
}
