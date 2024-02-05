using System;
using UnityEngine;
using System.Collections;

public class LoadingAnimator : MonoBehaviour
{
    [SerializeField] private GameObject loadingObject;
    [SerializeField] private float rotationDelay = 0.2f;
    [SerializeField] private float rotationAmount = 360f; // Rotate by 360 degrees
    [SerializeField] private float rotationTime = 1f; // Time to complete one rotation

    private void OnEnable()
    {
        StartCoroutine(RotateObject());
        DontDestroyOnLoad(this.gameObject);
    }

    private IEnumerator RotateObject()
    {
        while (true)
        {
            LeanTween.rotateAroundLocal(loadingObject, Vector3.forward, -rotationAmount, rotationTime);
            yield return new WaitForSeconds(rotationTime + rotationDelay);
        }
    }

    private void OnDisable()
    {
        StopCoroutine(RotateObject());
    }

    public void Show(bool value)
    {
        gameObject.SetActive(value);
    }
}