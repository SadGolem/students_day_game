using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Saver_Set : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        int number;
        number = SceneManager.GetActiveScene().buildIndex;
        PlayerPrefs.SetInt("levelScene", number);
    }

}
