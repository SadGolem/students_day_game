using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class trigger_food_empty : MonoBehaviour
{
    [SerializeField]
    Text time;


    void Update()
    {
        if (time.text == "0")
            SceneManager.LoadScene(7);
    }
}
