using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{

    public GameObject[] foods;
    public GameObject bomb;

    public float xBounds, yBounds;

    void Start()
    {
        StartCoroutine(SpawnRandomGameObject());
    }

    IEnumerator SpawnRandomGameObject()
    {
        yield return new WaitForSeconds(Random.Range(2, 4));


        int randomFood = Random.Range(0, foods.Length);
        if (Random.value <= .6f)
        {
            Instantiate(foods[randomFood],
                new Vector2(Random.Range(-xBounds, xBounds), yBounds), Quaternion.identity);
        }
        else
        {
            Instantiate(bomb,
                new Vector2(Random.Range(-xBounds, xBounds), yBounds), Quaternion.identity);      
        }
        StartCoroutine(SpawnRandomGameObject());
    }
}
