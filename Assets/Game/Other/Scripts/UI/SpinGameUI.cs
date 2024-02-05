using UnityEngine;
using UnityEngine.UI;
public class SpinGameUI : MonoBehaviour
{
    [SerializeField] private Button home;


    private void OnEnable()
    {
        home.onClick.AddListener(OnHome);
    }

    private void OnDisable()
    {
        home.onClick.RemoveListener(OnHome);
    }
    private void OnHome()
    {
        UIManager.ChangeScreen(UIManager.Screen.Home);
    }
}
