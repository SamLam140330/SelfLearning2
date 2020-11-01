using System;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{
    private int _score;
    private string _playerName;
    [SerializeField] private Text scoreTxt = null;
    [SerializeField] private Text playerTxt = null;
    public int Score { get { return _score; } set { _score = value; } }
    public string PlayerName { get { return _playerName; } set { _playerName = value; } }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.S))
        {
            SaveLoadSystem.BinaryFormatter(this);
            Display();
            Debug.Log("Saved");
        }

        #region My Original Save and Load
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
        //if (Input.GetKeyDown(KeyCode.S))
        //{
        //    SaveLoadSystem.SavePlayer(this);
        //    Display();
        //    Debug.Log("Saved");
        //    Debug.Log(test);
        //}
        //if (Input.GetKeyDown(KeyCode.L))
        //{
        //    PlayerData data = SaveLoadSystem.LoadPlayer();
        //    Score = data.score;
        //    PlayerName = data.playerName;
        //    Display();
        //    Debug.Log("Loaded");
        //}
        #endregion
    }

    #region Basic Game Function
    private void Start()
    {
        TestOnly();
    }

    private void TestOnly()
    {
#if DEVELOPMENT_BUILD || UNITY_EDITOR
        Debug.Log("DEVELOPMENT BUILD");
#else
        Debug.Log("NOT DEVELOPMENT BUILD");
#endif
    }

    public void AddScore()
    {
        Score += 10;
        PlayerName = "Test1";
        Display();
    }

    public void SubtractScore()
    {
        Score -= 10;
        PlayerName = "Test2";
        Display();
    }

    public void Display()
    {
        scoreTxt.text = "You got " + Score;
        playerTxt.text = "Your name is " + PlayerName;
    }
    #endregion
}
