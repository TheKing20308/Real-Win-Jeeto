using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SnakeGame;
using UnityEngine.UI;

namespace Snake2
{
    public class LudoNewDice : MonoBehaviour
    {
        [SerializeField] int roll;

        [SerializeField] Sprite[] die;

        // Call this method to start rolling the die
        public void StartRolling(int temp)
        {
            roll = temp;
            StartCoroutine(RollAndShow());
        }

        IEnumerator RollAndShow()
        { 
            Animator animator = GetComponent<Animator>();
            animator.enabled = true; // Play the new rolling animation
            
            yield return new WaitForSeconds(1); // Wait for however long your animation is
            animator.enabled = false;
            Image renderer = GetComponent<Image>();
            renderer.sprite = die[roll - 1];
        }

       
    }
}
