using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.Lumin;

public class go_to_cabinet2 : MonoBehaviour
{
    public TextMeshProUGUI text;
    public bool usl = false;
    void Update()
    {
        if (text.text == "Ñ÷¸ò: 3")
        {
            Invoke("NextScene", 50);
        }
    }


    public void NextScene()
    {
        SceneManager.LoadScene(3);
    }
}
