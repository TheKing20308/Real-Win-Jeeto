using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ProfilePage : MonoBehaviour
{
    [SerializeField] private TMP_Text winCoin;
    [SerializeField] private TMP_Text gamesPlayed;
    [SerializeField] private TMP_Text userName;
    [SerializeField] private TMP_Text mobileNumber;

    private void Update()
    {
        StartCoroutine(Profiledata());
    }

    IEnumerator Profiledata()
    {
        winCoin.text = ProfileFetch.totalcoin;
        gamesPlayed.text = ProfileFetch.gameplayed;
        userName.text = ProfileFetch.username;
        mobileNumber.text = ProfileFetch.mobilenumber;

        yield return new WaitForSeconds(10);
        
        StopCoroutine(Profiledata());
    }
}
