using System.Collections;
using System.Collections.Generic;
/*using UnityEditor.Tilemaps;*/
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public float speed;
    public float moveInput;

    public Animator animator;

    public Joystick joystick;
  //  private float HorizontalMove = 0f;

    private Rigidbody2D rb;
    private bool FacingRight = true;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        moveInput = joystick.Horizontal;
       // HorizontalMove = Input.GetAxisRaw("Horizontal");

        if (moveInput < 0 && FacingRight)
        {
            Flip();
        }
        else if (moveInput > 0 && !FacingRight)
        {
            Flip();
        }

    }

    private void FixedUpdate()
    {
        moveInput = joystick.Horizontal;
        animator.SetFloat("HorizontalMove", Mathf.Abs(moveInput));
        rb.velocity = new Vector2(moveInput * speed, rb.velocity.y);

    }

    private void Flip()
    {
        FacingRight = !FacingRight;

        Vector3 theScale = transform.localScale;
        theScale.x *= -1;
        transform.localScale = theScale;
    }
}
