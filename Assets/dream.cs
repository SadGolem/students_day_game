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
        if (text.text == "���� ������������, ��� ������ ��������.")
        SceneManager.LoadScene(1);
    }
}
