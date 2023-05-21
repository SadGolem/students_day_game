using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class down_dialogue : MonoBehaviour
{
    [SerializeField]
    public Text text;
    public dialogManager DM;
    public void DownDialogue()
    {
        if (text.text == "Конечно, я буду ждать тебя там.")
        {
            DM.EndDialog();
        }
    }
}
