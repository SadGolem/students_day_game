using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SavedAchievment : MonoBehaviour
{
    public static int i = 0;
    public static int teacher = 0;
    void Update()
    {
        /* i = gui.Player;
         teacher = gui.Teacher;*/
        i = GUIHandler.i;
        teacher = GUIHandler.j;
    }

    public static int PLAYER
    {
        get {
            return i; }
    }

    public static int TEACHER
    {
        get { return teacher; }
    }
}
