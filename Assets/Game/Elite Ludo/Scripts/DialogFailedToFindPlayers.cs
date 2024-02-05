using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogFailedToFindPlayers : MonoBehaviour
{
   void Start()
    {
        GameManager.Instance.dialogFailed = this;
    }

    public void ClosePlayerMatch(){
       // GameManager.Instance.playfabManager.CloseGame();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
