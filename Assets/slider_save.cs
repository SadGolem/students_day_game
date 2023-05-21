using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class slider_save : MonoBehaviour
{
    private float slider_ = 1f;
    void Update()
    {
        slider_ = PlayerPrefs.GetFloat("Slider");
    }
    public void ChangeSlider(float value)
    {
        slider_ = value;
        PlayerPrefs.SetFloat("Slider", slider_);
    }
}
