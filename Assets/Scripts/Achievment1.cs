using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Achievment1 : MonoBehaviour
{
    /*public TextMeshProUGUI text;*/
    [SerializeField]
    /*public TextMeshProUGUI text2;*/
    public bool usl = false;
    public Animator animator;
    public bool usl2 = false;
    [SerializeField]
    public string uslovie;

    public IEnumerator Wait()
    {
        yield return new WaitForSeconds(3f);
        CloseAchievment();
    }

    public void CloseAchievment()
    {
        animator.SetBool("isOpen", false);
    }
    public void ShowAchievment()
    {
        animator.SetBool("isOpen", true);
        StartCoroutine(Wait());
        usl = true;

    }
    // Update is called once per frame
    void Update()
    {
        if (usl == false)
        {
            animator.SetBool("isOpen", false);
            int pl1 = SavedAchievment.PLAYER;
            pl1++;
/*            pl1 = 3;*/

            if (pl1== 3 && SavedAchievment.TEACHER == 0 /*&& usl == false*/)
            {
                ShowAchievment();
            }
            /* usl = true;*/
        }
    }
}

