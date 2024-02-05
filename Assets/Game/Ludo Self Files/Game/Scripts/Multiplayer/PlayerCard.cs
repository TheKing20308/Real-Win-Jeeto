using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlayerCard : MonoBehaviour
{
    [SerializeField] private TMP_Text playerName;

    public void SetData(string name)
    {
        playerName.text = name;
    }
}