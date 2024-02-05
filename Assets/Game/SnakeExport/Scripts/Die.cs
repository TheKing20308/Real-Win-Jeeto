using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SnakeGame;

namespace Snake2
{
    public class Die : MonoBehaviour
    {
        int roll;

        [SerializeField]
        List<Sprite> die;

        public void RandomImage()
        {
            SpriteRenderer renderer = GetComponent<SpriteRenderer>();
            renderer.sprite = die[Random.Range(0, die.Count)];
        }

        // Call this method to start rolling the die
        public void StartRolling(int temp)
        {
            roll = temp;
            StartCoroutine(RollAndShow());
        }

        IEnumerator RollAndShow()
        {
            Animator animator = GetComponent<Animator>();
            animator.enabled = true;
            animator.Play("Dice Roll", -1, 0f); // Play the new rolling animation

            yield return new WaitForSeconds(1); // Wait for 2 seconds or however long your animation is
            animator.enabled = false;
            SetImage(); // Now set the image
        }

        void SetImage()
        {
            SpriteRenderer renderer = GetComponent<SpriteRenderer>();
            renderer.sprite = die[roll - 1];
            SnakeGame.GameManager.instance.MovePiece();
        }
    }
}
