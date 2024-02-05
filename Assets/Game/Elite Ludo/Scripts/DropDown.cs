using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropDown : MonoBehaviour
{
    // Start is called before the first frame update
    public void HandleInputData(int val)
    {
        if (val == 0)
        {
            PlayerPrefs.SetInt("Steps", 1);
            Debug.Log("Value of step is : " + val);
        }
        else if (val == 1)
        {
            PlayerPrefs.SetInt("Steps", 2);
            Debug.Log("Value of step is : " + val);
        }
        else if (val == 2)
        {
            PlayerPrefs.SetInt("Steps", 3);
            Debug.Log("Value of step is : " + val);
        }
        else if (val == 3)
        {
            PlayerPrefs.SetInt("Steps", 4);
            Debug.Log("Value of step is : " + val);
        }
        else if (val == 4)
        {
            PlayerPrefs.SetInt("Steps", 5);
            Debug.Log("Value of step is : " + val);
        }
        else
        {
            PlayerPrefs.SetInt("Steps", 6);
            Debug.Log("Value of step is : " + val);
        }
    }

   
}
