using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class Audio_Settings : MonoBehaviour
{
    public AudioSource mixer;
    private float musicVolume=1f;
    /*public AudioMixerGroup Mixer;*/
    void Start()
    {
        mixer = GetComponent<AudioSource>();

    }
    void Update()
    {
        mixer.volume = musicVolume;
    }
    public void ToggleMusic(float vlm)
    {
        musicVolume = vlm;
    }

}
