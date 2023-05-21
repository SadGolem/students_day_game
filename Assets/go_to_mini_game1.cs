using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class go_to_mini_game1 : MonoBehaviour
{
    public Text text;

    public void go_To()
    {
        if (text.text == "Ну навряд ли ты сможешь победить меня, я кандидат наук. Ну попытайся тогда.")
        {
            SceneManager.LoadScene(2);
        }
    }
}
