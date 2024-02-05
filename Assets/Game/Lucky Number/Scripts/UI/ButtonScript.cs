using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;
using ZxLog;

public class ButtonScript : MonoBehaviour
{
    
    private Button _btt;
    private Image _img;
    private TMP_Text _text;

    [SerializeField] private Sprite spriteRed;
    [SerializeField] private Sprite spriteWhite;

    private Button _confirm;
    private Button _proceedToPay;

    private Color oldColor = new Color(28/255f, 26/255f, 94/255f, 255/255);

    private void Awake()
    {
        
    }

    public void SetButtonFalse()
    {
        _btt.interactable = true;
        _img.sprite = spriteWhite;
        _text.color = oldColor;
    }

    private void OnEnable()
    {
        _btt = GetComponent<Button>();
        _img = GetComponent<Image>();
        _text = gameObject.GetComponentInChildren<TMP_Text>();
        _confirm = GameObject.FindGameObjectWithTag("Confirm").GetComponent<Button>();
        _proceedToPay = GameObject.FindGameObjectWithTag("Proceed").GetComponent<Button>();
        _btt.onClick.AddListener(OnClick);
    }

    private void OnDisable()
    {
        _btt.onClick.RemoveListener(OnClick);
    }

    private void Start()
    {
        _proceedToPay.interactable = false;
        _confirm.interactable = false;
    }

    void OnClick()
    {
        
        if (PopUp_ProceedToPay.ButtonScript != null)
        {
            PopUp_ProceedToPay.ButtonScript.SetButtonFalse();
        }

        ChangeToRed();

        PopUp_ProceedToPay.ButtonScript = this;
        PopUp_ProceedToPay._num = this.gameObject;
        _confirm.interactable = true;
    }

    private void ChangeToRed()
    {
        _btt.interactable = false;
        _img.sprite = spriteRed;
        _text.color = Color.white;
    }
}
