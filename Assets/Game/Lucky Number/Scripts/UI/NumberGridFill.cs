using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class NumberGridFill : MonoBehaviour
{
    [SerializeField] private GameObject buttonPrefab;
    [SerializeField] private Transform parent;
    
    [ContextMenu("Generate Buttons")]
    private void ButtonGenrator()
    {
        for (int i = 0; i < 100; i++)
        {
            if (i < 9)
            {
                var obj = Instantiate(buttonPrefab, parent);
                int num = i + 1;
                obj.name = ("0" + num);
                obj.GetComponentInChildren<TMP_Text>().text = ("0" + num);
            }
            else if (i < 99)
            {
                var obj = Instantiate(buttonPrefab, parent);
                int num = i + 1;
                obj.name = ("" + num);
                obj.GetComponentInChildren<TMP_Text>().text = ("" + num);
            }
            else if (i == 99)
            {
                var obj = Instantiate(buttonPrefab, parent);
                obj.name = ("00");
                obj.GetComponentInChildren<TMP_Text>().text = ("00");
            }
            
            
        }
    }

    
    /*void ButtonPlace()
    {
        for(int i = 1; i <= 100; i++)
        {
            if (i <= 9)
            {
                GameObject tempbutton = Instantiate(buttonPrefab, transform.position, Quaternion.identity);
                tempbutton.transform.SetParent(gameObject.transform, false);


                string name = ("0"+ i);
                tempbutton.name = name;

                GameObject text = tempbutton.transform.GetChild(0).gameObject;
                TextMeshProUGUI textMesh = text.GetComponent<TextMeshProUGUI>();
                textMesh.text = name;
            }
            else if (i <= 99)
            {
                GameObject tempbutton = Instantiate(buttonPrefab, transform.position, Quaternion.identity);
                tempbutton.transform.SetParent(gameObject.transform, false);


                string name = (""+ i);
                tempbutton.name = name;

                GameObject text = tempbutton.transform.GetChild(0).gameObject;
                TextMeshProUGUI textMesh = text.GetComponent<TextMeshProUGUI>();
                textMesh.text = name;
            }
            else
            {
                GameObject tempbutton = Instantiate(buttonPrefab, transform.position, Quaternion.identity);
                tempbutton.transform.SetParent(gameObject.transform, false);


                string name = "00";
                tempbutton.name = name;

                GameObject text = tempbutton.transform.GetChild(0).gameObject;
                TextMeshProUGUI textMesh = text.GetComponent<TextMeshProUGUI>();
                textMesh.text = name;
            }


        }
    }*/
}
