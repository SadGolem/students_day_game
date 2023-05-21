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
        if (text.text == "Ой смешной, но посмеяться мы еще успеем, или нет, если не успеем встать в очередь, быстрее! Там уже народ набежал.")
            SceneManager.LoadScene(6);
    }

}
