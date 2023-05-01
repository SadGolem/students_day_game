using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dialAnimator : MonoBehaviour
{
    public Animator startAnim;
    public dialogManager dm;

    public void OnTriggerExit2D(Collider2D other)
    {
        startAnim.SetBool("openStart", false);
        dm.EndDialog();
    }

    public void OnTriggerEnter2D(Collider2D other)
    {
        startAnim.SetBool("openStart", true);
    }


}

