using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;

public class Dialogue : MonoBehaviour
{
    /*public string name;

    [TextArea(1,10)]
    public string[] sentences;*/
    [SerializeField]
    private List<string> Read = new List<string>();
    public string nameCharacter;
    public Sprite image_C;
    /*public Queue<string> ReadQueue = new Queue<string>();*/


    public int GetReadCount()
        {
        return Read.Count;
    }

    public string GetReadStringIndex(int i)
    { 
        return Read[i]; 
    }

    public string Name()
    {
        return nameCharacter;
;
    }

}
