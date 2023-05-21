using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Audio : MonoBehaviour
{
    [SerializeField]
    private AudioSource audio_source;
    float musicVolume = 1f;
    // Update is called once per frame
    void Update()
    {
        if (PlayerPrefs.GetFloat("Volume") < 1)
            musicVolume = PlayerPrefs.GetFloat("Volume");
        else
            musicVolume = 1f;
        audio_source.volume = musicVolume;
    }

    public void SetVolume(float volume)
    {
        musicVolume = volume;
        PlayerPrefs.SetFloat("Volume", volume);
    }
}
