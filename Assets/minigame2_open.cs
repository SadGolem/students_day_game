using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class minigame2_open : MonoBehaviour
{
    [SerializeField]
    Text text;
    public void Open_game_food()
    {
        if (text.text == "�� �������, �� ���������� �� ��� ������, ��� ���, ���� �� ������ ������ � �������, �������! ��� ��� ����� �������.")
            SceneManager.LoadScene(6);
    }

}
