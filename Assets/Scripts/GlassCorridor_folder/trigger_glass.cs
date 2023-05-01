using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class trigger_glass : MonoBehaviour
{
    public void Trigger()
    {
        FindObjectOfType<dialogManager>().StartDialogue();
    }
}
