using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogNoPlayersCtrl : MonoBehaviour
{
    public GameObject dialogTxt;
    // Start is called before the first frame update
    void Start()
    {
        GameManager.Instance.dialogNoPlayers = this;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
