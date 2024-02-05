using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class HomeButtons : MonoBehaviour
{
    [SerializeField] private Button _luckyBtt;
    [SerializeField] private Button _ludoBtt;
    [SerializeField] private Button _spinBtt;
    [SerializeField] private Button _teenPattiBtt;
    [SerializeField] private Button _rummyBtt;
    [SerializeField] private Button _snakeBtt;
    [SerializeField] private Button _fruitBtt;
    [SerializeField] private MatkaCheck _matkaCheck;

    private void OnEnable()
    {
        _luckyBtt.onClick.AddListener(OnLuckyNumber);
        _ludoBtt.onClick.AddListener(OnLudo);
        _spinBtt.onClick.AddListener(OnMatka);
        _teenPattiBtt.onClick.AddListener(OnTeenPatti);
        _rummyBtt.onClick.AddListener(OnRummy);
        _snakeBtt.onClick.AddListener(OnSnake);
        _fruitBtt.onClick.AddListener(OnFruit);
    }

    private void OnDisable()
    {
        _luckyBtt.onClick.RemoveListener(OnLuckyNumber);
        _ludoBtt.onClick.RemoveListener(OnLudo);
        _spinBtt.onClick.RemoveListener(OnMatka);
        _teenPattiBtt.onClick.RemoveListener(OnTeenPatti);
        _rummyBtt.onClick.RemoveListener(OnRummy);
        _snakeBtt.onClick.RemoveListener(OnSnake);
        _fruitBtt.onClick.RemoveListener(OnFruit);
    }

    void OnLuckyNumber()
    {
        _matkaCheck.StatusApi();
        StartCoroutine(LuckyNumCheck());

    }

    IEnumerator LuckyNumCheck()
    {
        yield return new WaitForSeconds(2);
        if (_matkaCheck.gameRunning == true)
        {
            SceneManager.LoadScene(1);
        }
        else
        {
            string noGame = "There is currently no available game running";
            PopUp.Show(noGame);
        }
        
        StopCoroutine(LuckyNumCheck());
    }

    void OnLudo()
    {
        SceneManager.LoadScene(2);
    }

    void OnMatka()
    {
        UIManager.ChangeScreen(UIManager.Screen.Spin);
    }

    void OnTeenPatti()
    {
        
    }

    void OnRummy()
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;
        SceneManager.LoadScene(3);
    }

    void OnSnake()
    {
        SceneManager.LoadScene(4);
    }

    void OnFruit()
    {
        SceneManager.LoadScene(5);
    }
}
