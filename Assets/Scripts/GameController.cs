using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{
    #region Global Variable Declaration
    private int _score;
    private string _playerName;
    [SerializeField] private Text scoreTxt = null;
    [SerializeField] private Text playerTxt = null;
    public int Score { get { return _score; } set { _score = value; } }
    public string PlayerName { get { return _playerName; } set { _playerName = value; } }
    #endregion

    #region Unity Build-in Function
    private void Start()
    {
        TestOnly();
    }

    private void Update()
    {
        QuitGame();
    }
    #endregion

    #region Game Logic
    private void TestOnly()
    {
#if DEVELOPMENT_BUILD || UNITY_EDITOR
        Debug.Log("DEVELOPMENT BUILD");
#else
        Debug.Log("NOT DEVELOPMENT BUILD");
#endif
    }

    private void QuitGame()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }

    private void Display()
    {
        scoreTxt.text = "You got " + Score;
        playerTxt.text = "Your name is " + PlayerName;
    }
    #endregion

    #region Button Function
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

    public void Save()
    {
        SaveLoadSystem.SavePlayer(this);
    }

    public void Load()
    {
        PlayerData playerData = SaveLoadSystem.LoadPlayer();
        if (playerData != null)
        {
            Score = playerData.score;
            PlayerName = playerData.playerName;
            Display();
            Debug.Log("Loaded");
        }
    }
    #endregion
}
