using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.Lumin;
using UnityEngine.SceneManagement;
using UnityEngine.TextCore.Text;
using UnityEngine.UI;

public class DialogManager : MonoBehaviour
{

    public List<GameObject> Character = new List<GameObject>();
    public Text TextOut;
    public Text nameText;
    public Image imageCharacter;
    public Button buttonDialogSkip;
    private bool _IsStart = true;
    int IndexCharacter = 0;
    int IndexText = 0;
    Dialogue dialogueCharacter;

    [Header("Sound")]
    [SerializeField]  public AudioClip sound;

    private IEnumerator WaitSeconds(float x)
    {
        yield return new WaitForSeconds(x);
    }

    private void Start()
    {
        WriteDialogue();
        IndexCharacter++;
    }

    private void WriteDialogue()
    {
        if (Character.Count > IndexCharacter)
        {
            if (Character[IndexCharacter].GetComponent<Dialogue>() != null)
            {
                dialogueCharacter = Character[IndexCharacter].GetComponent<Dialogue>();
                if (IndexText >= dialogueCharacter.GetReadCount())
                {
                    System.Console.WriteLine("end dialogue");
                }
                else
                {
                    string name = dialogueCharacter.Name();
                    Sprite image = dialogueCharacter.image_C;
                    string text = dialogueCharacter.GetReadStringIndex(IndexText);
                    TextDialog(text, name, image);
                }
            }
        }
        else 
            Debug.Log("end dialogue");
    }
    private void TextDialog(string text,string name, Sprite image)
    {
        StartCoroutine(TypeSentence(text, TextOut, sound));
        nameText.text = name;
        imageCharacter.sprite = image;

    }

    public IEnumerator TypeSentence(string sentence, Text textBox, AudioClip sound)
    {
        TextOut.text = "";
        buttonDialogSkip.enabled = false;
        if (_IsStart)
        {
            yield return new WaitForSeconds(3f);
            _IsStart = false;
        }
        if (sentence.Split(" ").Length < 4)
        {  
            foreach (char letter in sentence.ToCharArray())
            {
                textBox.text += letter;
                SoundManager.instance.PlaySound(sound);
                if (textBox.text.Length == sentence.Length)
                    buttonDialogSkip.enabled = true;
                yield return new WaitForSeconds(0.1f);
            }

        }
        else
            foreach (char letter in sentence.ToCharArray())
            {
                textBox.text += letter;
                SoundManager.instance.PlaySound(sound);
                if (letter == '.')
                {
                    if (textBox.text.Length == sentence.Length)
                        buttonDialogSkip.enabled = true;
                    yield return new WaitForSeconds(1f);
                }
                else if (letter == ',')
                {
                    if (textBox.text.Length == sentence.Length)
                        buttonDialogSkip.enabled = true;
                    yield return new WaitForSeconds(0.5f);
                }
                else
                    if (textBox.text.Length == sentence.Length)
                    buttonDialogSkip.enabled = true;
                    yield return new WaitForSeconds(0.03f);
            }

    }
    public void NextIndex()
    {
        for (int i = IndexCharacter; i < Character.Count; i++)
        {
            WriteDialogue();
            return;
        }
        if (IndexCharacter >= Character.Count)
        {
            IndexCharacter = 0;
            IndexText++;
            WriteDialogue();
        }
        if (TextOut.text == "Семенов, ну это просто смешно. Какие крестики-нолики? Я кандидат наук, ты меня ни за что не выиграешь. Давай сыграем.")
        {
            SceneManager.LoadScene(2);
        }
    }

    public void NextDialog()
    {
        NextIndex();
        IndexCharacter++;
    }
}
