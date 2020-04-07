using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class board : MonoBehaviour
{
    public Manager manager;
    public GameObject dartPrefab;
    public GameObject dartPrefab2;
    // Start is called before the first frame update
    private void OnCollisionEnter(Collision col)
    {
        col.rigidbody.velocity = Vector3.zero;
        col.rigidbody.isKinematic = true;
        col.transform.SetParent(transform);
        if (Manager.player == 1)
        {
            Instantiate(dartPrefab, col.transform.position, col.transform.rotation);
        }
        else {

            Instantiate(dartPrefab2, col.transform.position, col.transform.rotation);

        }
        manager.increaseScore(Manager.player);
        //add copy prefab
    }
}
