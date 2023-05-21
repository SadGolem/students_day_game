using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Choise : MonoBehaviour
{
    [SerializeField]
    public Text text;
    [SerializeField]
    public Button button1;
    [SerializeField]
    public Button button2;
    [SerializeField]
    GameObject _gameObject;

    public void Choise_B()
    {
        button1.interactable = false;
        button2.interactable = false;
        _gameObject.SetActive(false);
        if (text.text == "Мне нравится...")
        {
            _gameObject.SetActive(true);
            button1.interactable = true;
            button2.interactable = true;
        }
    }

}
