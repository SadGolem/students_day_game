using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class menustart : MonoBehaviour
{
    public void Play()
    {
        if (PlayerPrefs.GetInt("levelScene") == 0)
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }
        else
            SceneManager.LoadScene(PlayerPrefs.GetInt("levelScene"));
    }

    public void Exit()
    {
        Debug.Log("игра закрылась");
        Application.Quit();
    }
}
