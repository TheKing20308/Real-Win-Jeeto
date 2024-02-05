using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PopUp : MonoBehaviour
{
    [Header("GameObjects")]
    [SerializeField] private GameObject window;
    [SerializeField] private GameObject oneBtt;
    [SerializeField] private GameObject dualBtt;
    [Space]
    [Header("Components")]
    [SerializeField] private TMP_Text para;
    [SerializeField] private Button ok;
    [SerializeField] private Button yes;
    [SerializeField] private Button no;

    [Header("Animation")]
    [SerializeField] private float animationTime = 0.5f;
    [SerializeField] private Vector3 startScale = new Vector3(0.7f, 0.7f, 0.7f);
    [SerializeField] private Vector3 endScale = Vector3.one;

    public static PopUp instance;

    private Action customOkAction;
    private Action customYesAction;
    private Action customNoAction;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    private void OnEnable()
    {
        ok.onClick.AddListener(OnOk);
        yes.onClick.AddListener(OnYes);
        no.onClick.AddListener(OnNo);
        GrowAnimation();
    }

    private void OnDisable()
    {
        ok.onClick.RemoveListener(OnOk);
        yes.onClick.RemoveListener(OnYes);
        no.onClick.RemoveListener(OnNo);

        customOkAction = null;
        customYesAction = null;
        customNoAction = null;
    }

    private void GrowAnimation()
    {
        window.transform.localScale = startScale;
        LeanTween.scale(window, endScale, animationTime);
    }

    private void ShrinkAnimation()
    {
        LeanTween.scale(window, startScale, animationTime).setOnComplete(() => {
            gameObject.SetActive(false);
        });
    }

    private void OnOk()
    {
        customOkAction?.Invoke();
        ShrinkAnimation();
    }

    private void OnYes()
    {
        customYesAction?.Invoke();
        ShrinkAnimation();
    }

    private void OnNo()
    {
        customNoAction?.Invoke();
        ShrinkAnimation();
    }

    private static void SetupPopup(string text)
    {
        instance.window.transform.localScale = instance.startScale;
        instance.gameObject.SetActive(true);
        instance.para.text = text;
    }

    private static void EnableOk()
    {
        instance.oneBtt.SetActive(true);
        instance.dualBtt.SetActive(false);
    }

    private static void EnableYesNo()
    {
        instance.oneBtt.SetActive(false);
        instance.dualBtt.SetActive(true);
    }

    #region CallingMethods

    public static void Show(string text)
    {
        EnableOk();
        SetupPopup(text);
        instance.customOkAction = null;
        instance.customYesAction = null;
        instance.customNoAction = null;
    }

    public static void Show(string text, Action okAction)
    {
        EnableYesNo();
        SetupPopup(text);
        instance.customOkAction = okAction;
        instance.customYesAction = null;
        instance.customNoAction = null;
    }

    public static void Show(string text, Action yesAction, Action noAction)
    {
        EnableYesNo();
        SetupPopup(text);
        instance.customOkAction = null;
        instance.customYesAction = yesAction;
        instance.customNoAction = noAction;
    }

    #endregion
}
