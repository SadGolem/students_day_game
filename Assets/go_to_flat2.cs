using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class go_to_flat2 : MonoBehaviour
{
    [SerializeField]
    Text text;
    public void Go_to_flat_2()
    {
        if (text.text == "�������, ����� �������� ������ ������. ���� ����� ������ ������.")
        {
            SceneManager.LoadScene(9);
        }
    }
}
