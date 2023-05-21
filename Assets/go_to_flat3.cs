using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class go_to_flat3 : MonoBehaviour
{
    [SerializeField]
    Text text;

    public void Load()
    {
        if (text.text == "Приходи на кухню поговорить.")
        {
            SceneManager.LoadScene(10);
        }
    }
}
