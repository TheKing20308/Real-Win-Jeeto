using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using ZxLog;
public class SnakeUIManager : MonoBehaviour
{

    public enum SnakeScreen
    {
        Game,
        GameOver
        
        // Add other screens as needed
    }

    

    [Header("For Multiplayer Start")]
    [SerializeField]
    internal InitMenuScript initMenuScriptSnake;
    [SerializeField] private GameObject[] doNotDestroy;
    [Space]
    public static string GameScene = "GameScene";
    public List<GameObject> singletons;
    public static SnakeUIManager instance;
    public LoadingAnimator loading;
    [SerializeField] private List<ScreenPair> snakescreens;
    [SerializeField] private GameObject adsManager;

    [SerializeField] private static int playedTime = 0;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }


        foreach (var screen in singletons)
        {
            screen.SetActive(true);
            screen.SetActive(false);
        }
    }


    private void OnApplicationQuit()
    {
        //App quit called
        Debug.Log("App Quit Called");
        PlayerPrefs.SetString("isLoggedIn", "No");
        initMenuScriptSnake.gameObject.SetActive(false);
        StopAdsManager();
    }

    private void StopAdsManager()
    {
        //AdsApi.loop = false;
        adsManager.SetActive(false);
        Print.CustomLog("Ads manager stopped", 15, LogColor.Green);
    }


    private void Start()
    {
        ChangeScreen(SnakeScreen.Game);
    }

    private void OnApplicationPause(bool hasFocus)
    {
        if (!hasFocus)
        {
            PlayerPrefs.SetString("isLoggedIn", "no");
        }
    }

    public static void ChangeScreen(SnakeScreen screenName)
    {
        foreach (ScreenPair pair in instance.snakescreens)
        {
            if (pair.snakescreenType == screenName)
            {
                pair.AnimateIn();
            }
            else if (pair.screenObject.activeSelf)
            {
                pair.AnimateOut();
            }
        }
    }

    public static void ChangeScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

    public static void ShowLoading(bool value)
    {
        instance.loading.Show(value);
    }

    [Serializable]
    public struct ScreenPair
    {
        public SnakeScreen snakescreenType;
        public GameObject screenObject;
        public float transitionDuration;

        public void AnimateIn()
        {
            LeanTween.cancel(screenObject);
            screenObject.SetActive(true);
            // Start from transparent and fade in
            CanvasGroup canvasGroup = screenObject.GetComponent<CanvasGroup>();
            if (canvasGroup == null) canvasGroup = screenObject.AddComponent<CanvasGroup>();
            canvasGroup.alpha = 0;
            LeanTween.alphaCanvas(canvasGroup, 1, transitionDuration).setEase(LeanTweenType.easeInOutQuad);
        }

        public void AnimateOut()
        {
            GameObject pp = screenObject;
            LeanTween.cancel(screenObject);
            // Start from opaque and fade out
            CanvasGroup canvasGroup = screenObject.GetComponent<CanvasGroup>();
            if (canvasGroup == null) canvasGroup = screenObject.AddComponent<CanvasGroup>();
            LeanTween.alphaCanvas(canvasGroup, 0, transitionDuration)
                .setEase(LeanTweenType.easeInOutQuad)
                .setOnComplete(() => pp.SetActive(false));
        }
    }
}
