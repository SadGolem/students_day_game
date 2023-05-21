using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class go_to_flat : MonoBehaviour
{
    [SerializeField]
    Text text;
    public void go_to_flat_B()
    {
        if (text.text == "Давай, до связи.")
        {
            SceneManager.LoadScene(8);
        }
    }
}
