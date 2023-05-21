using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class dream : MonoBehaviour
{
    [SerializeField]
    public Text text;
    public void _Dream()
    {
        if (text.text == "Влад почувствовал, что теряет сознание.")
        SceneManager.LoadScene(1);
    }
}
