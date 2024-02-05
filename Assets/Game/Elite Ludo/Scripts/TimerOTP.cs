using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
public class TimerOTP : MonoBehaviour
{

    public Text Timer;
    public GameObject resendButton;
    public int Timeer = 60;

    [SerializeField] private TMP_Text otpText;

    public static TMP_Text _otpText;

    private void Awake()
    {
        _otpText = otpText;
    }
    void OnEnable()
    {
        Timeer = 60;
        resendButton.SetActive(false);
        Timer.text = "60 s";
        Invoke("Clock", 1.0f);

    }

    void Clock()
    {


        Timeer--;

        if (Timeer == 0)
        {
            resendButton.SetActive(true);
        }
        Timer.text = Timeer.ToString() + " s";
        if (Timeer > 0)
        {

            Invoke("Clock", 1.0f);

        }
    }

    public void resendOTP()
    {
        ResetTimer();
    }

    public void ResetTimer()
    {
        Timeer = 60;
        resendButton.SetActive(false);
        Timer.text = "60 s";
        Invoke("Clock", 1.0f);
    }
}
