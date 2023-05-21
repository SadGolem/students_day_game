using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Eva_teleportation : MonoBehaviour
{
    [SerializeField]
    Text text;

    void Update()
    {
        if (text.text == "Из кухни вваливается Ева.")
        {
            transform.position = new Vector3(169.9f, -20.8f, 0);
        }
    }
}
