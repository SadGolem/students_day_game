using Newtonsoft.Json.Bson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controller_plate : MonoBehaviour
{

    public float speed;
    public float NormalSpeed;
    public float moveInput;

    private Rigidbody2D rb;

    void Start()
    {
        speed = 0f;
        rb = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate()
    {
        rb.velocity = new Vector2(speed, rb.velocity.y);
    }

    public void OnRight()
    {
        if (speed <= 0f)
            speed = NormalSpeed;
    }

    public void OnLeft()
    {
        if (speed >= 0f)
            speed = -NormalSpeed;
    }

    public void OnButtonUp()
    {
        speed = 0f;
    }


}
