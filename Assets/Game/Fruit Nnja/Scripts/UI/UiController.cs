using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace FruitNinja
{
    public class UiController : MonoBehaviour
    {
        [SerializeField] private Button close;

        private void OnEnable()
        {
            close.onClick.AddListener(OnClose);
        }

        private void OnDisable()
        {
            close.onClick.RemoveListener(OnClose);
        }
        private void OnClose()
        {
            SceneManager.LoadScene(0);
        }
    }
}
