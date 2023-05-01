using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class trigger_stolovaya : MonoBehaviour
{
    public Animator startAnim;

    public void OnTriggerExit2D(Collider2D other)
    {
        startAnim.SetBool("isOpen", false);
    }

    public void OnTriggerEnter2D(Collider2D other)
    {
        startAnim.SetBool("isOpen", true);
    }
}
