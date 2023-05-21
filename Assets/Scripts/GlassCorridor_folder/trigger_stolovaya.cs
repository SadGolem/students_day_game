using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class trigger_stolovaya : MonoBehaviour
{
    public Animator startAnim;
    public Text text;
    public void OnTriggerExit2D(Collider2D other)
    {
        startAnim.SetBool("isOpen", false);
    }

    public void OnTriggerEnter2D(Collider2D other)
    {
        if (text.text == "Конечно, я буду ждать тебя там.")
        {
            startAnim.SetBool("isOpen", true);
        }
    }
}
