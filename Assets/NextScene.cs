using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class NextScene : MonoBehaviour
{
    [SerializeField]
    Text text;
    public void NextScene_B()
    {
        if (text.text == "*Влад торопливо покидает аудиторию*")
        {
            SceneManager.LoadScene(4);
        }
    }

}
