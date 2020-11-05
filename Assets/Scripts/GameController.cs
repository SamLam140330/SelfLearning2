using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{
    #region Global Variable Declaration
    [SerializeField] private Text scoreTxt = null;
    [SerializeField] private Text playerNameTxt = null;
    [SerializeField] private Text playerHealthTxt = null;
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
        scoreTxt.text = "You got " + PlayerController.Score;
        playerNameTxt.text = "Your name is " + PlayerController.PlayerName;
        playerHealthTxt.text = "Your health remain " + PlayerInfo.PlayerHealth;
    }
    #endregion

    #region Button Function
    public void AddScore()
    {
        PlayerController.Score += 10;
        PlayerController.PlayerName = "Test1";
        PlayerInfo.PlayerHealth += 5.5f;
        Display();
    }

    public void SubtractScore()
    {
        PlayerController.Score -= 10;
        PlayerController.PlayerName = "Test2";
        PlayerInfo.PlayerHealth -= 5.5f;
        Display();
    }

    public void Save()
    {
        SaveLoadSystem.SavePlayer();
    }

    public void Load()
    {
        PlayerData playerData = SaveLoadSystem.LoadPlayer();
        if (playerData != null)
        {
            PlayerController.Score = playerData.score;
            PlayerController.PlayerName = playerData.playerName;
            PlayerInfo.PlayerHealth = playerData.playerHealth;
            Display();
            Debug.Log("Loaded");
        }
    }
    #endregion
}
