using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ColorChange : MonoBehaviour
{
    private Image img;
    [SerializeField] private TextMeshProUGUI txt;
    private Button btt;

    [SerializeField] private NumberSelectDown nsd;
    
    [SerializeField] Button _spin;
    

    private void Awake()
    {
        img = GetComponent<Image>();
        btt = GetComponent<Button>();
        txt = GetComponentInChildren<TextMeshProUGUI>();
    }

    private void OnEnable()
    {
        btt.onClick.AddListener(OnClick);
        _spin.onClick.AddListener(OnSpin);
    }

    private void OnDisable()
    {
        btt.onClick.RemoveListener(OnClick);
        _spin.onClick.RemoveListener(OnSpin);
    }

    void OnSpin()
    {
        if (nsd.ColorChange != null)
        {
            nsd.ColorChange.Deselect();
        }
    }
    
    void OnClick()
    {
        if (nsd.ColorChange != null)
        {
            nsd.ColorChange.Deselect();
        }
        
        Select();
        
        nsd.ColorChange = this;
    }

    void Select()
    {
        img.color = new Color(13 / 255f, 9 / 255f, 65 / 255f, 1);
        txt.color = new Color(254 / 255f, 240 / 255f, 159 / 255f, 255/255);
    }

    public void Deselect()
    {
        img.color = new Color(254 / 255f, 240 / 255f, 159 / 255f, 1);
        txt.color = new Color(13 / 255f, 9 / 255f, 65 / 255f, 1);
    }
}
