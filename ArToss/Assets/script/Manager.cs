using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Manager : MonoBehaviour
{
    public Text p1;
    public Text p2;
    public Text PlayerTurn;
    public Text winner;
    public static bool playing = true;
    public static int player = 1;
    private int p1Score=0;
    private int p2Score = 0;

    public void Awake()
    {
        winner.enabled = false;

        player = 1;
    }

    public void increaseScore(int turn) {
        if (turn == 1) { p1Score++; }
        else { p2Score++; }
    }

    void Update()
    {
        PlayerTurn.text = "player " + player.ToString() + "'s turn";
        p1.text = "Player 1: " + p1Score.ToString();
        p2.text = "Player 2: " + p2Score.ToString();

        if (!playing && Input.touchCount > 0) { SceneManager.LoadScene(0); }
        else {
            if (p2Score >= 5)
            {
                winner.enabled = true;
                winner.text = "Player 2 Wins!";
                playing = false;
            }
            else if (p1Score >= 5)
            {
                winner.enabled = true;
                winner.text = "Player 1 Wins!";
                playing = false;
            }


        }
    }
}
