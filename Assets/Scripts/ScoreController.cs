using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Unity.VisualScripting.Dependencies.NCalc;

public class ScoreController : MonoBehaviour
{
    public Text scoreText;
    public Text time;

    private int score;
    private float timeLeft = 60;

    void Start()
    {
        
    }
    void Update()
    {
        timeLeft -= Time.deltaTime;
        scoreText.text = "Ñ÷¸ò: " + score.ToString();
        time.text = timeLeft.ToString();
        if (timeLeft <= 0)
        {
            SceneManager.LoadScene(7);
        }
    }

    private void OnTriggerEnter2D(Collider2D target)
    {
        if (target.tag == "bomb")
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    private void OnTriggerExit2D(Collider2D target)
    {
        if (target.tag == "food")
        {
            Destroy(target.gameObject);
            score++;
        }
    }
}
