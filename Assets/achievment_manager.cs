using Cinemachine;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class achievment_manager : MonoBehaviour
{
    public Text text;
    public bool usl = false;
    public Animator animator;
    [SerializeField]
    public string uslovie;

    public IEnumerator Wait()
    {
        yield return new WaitForSeconds(2f);
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
    }

    void Update()
    {
        if (usl == false)
        {
            animator.SetBool("isOpen", false);

            if (text.text == uslovie)
            {
                usl = true;
                ShowAchievment();
            }
        }
    }
}
