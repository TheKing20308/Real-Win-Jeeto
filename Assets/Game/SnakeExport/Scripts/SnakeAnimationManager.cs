using System;
using System.Collections;
using UnityEngine;
using ZxLog;
using Random = UnityEngine.Random;
public class SnakeAnimationManager : MonoBehaviour
{
    [SerializeField] private Animator[] animators;
    public static bool loopRandomSnakeAnimator = false;

    private void Start()
    {
        loopRandomSnakeAnimator = true;
        foreach (Animator animator in animators)
        {
            animator.enabled = false;
        }
        StartCoroutine(AnimateRandomSnakes());
    }

    private void OnDisable()
    {
        StopCoroutine(AnimateRandomSnakes());
    }

    private IEnumerator AnimateRandomSnakes()
    {
        while (loopRandomSnakeAnimator)
        {
            int randomIndex = Random.Range(0, animators.Length);
            animators[randomIndex].enabled = true;
            //wait until animation finishes
            yield return new WaitForSecondsRealtime(0.5f);
            //Print.CustomLog($"Playback Time = {animators[randomIndex].playbackTime}", LogColor.Red);
            //wait until animation finishes
            animators[randomIndex].enabled = false;
            yield return new WaitForSeconds(0.5f);
        }
    }
}
