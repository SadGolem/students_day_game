using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class go_to_cabinet1 : MonoBehaviour
{
    public Text text;
    
    public void go_To()
    {
        if (text.text == "Знаешь... ты мне нравишься...")
        {
            SceneManager.LoadScene(13);
        }
    }
}
