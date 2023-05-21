using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class trigger_room : MonoBehaviour
{
    public void Trigger()
    {
        FindObjectOfType<dialogManager>().StartDialogue();
    }
}
