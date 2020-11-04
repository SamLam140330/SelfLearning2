using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{
    #region Global Variable Declaration
    private PlayerController playerController;
    [SerializeField] private Text scoreTxt = null;
    [SerializeField] private Text playerTxt = null;
    #endregion

    #region Unity Build-in Function
    private void Start()
    {
        TestOnly();
        FindObject();
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

    private void FindObject()
    {
        playerController = FindObjectOfType<PlayerController>();
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
        scoreTxt.text = "You got " + playerController.Score;
        playerTxt.text = "Your name is " + playerController.PlayerName;
    }
    #endregion

    #region Button Function
    public void AddScore()
    {
        playerController.Score += 10;
        playerController.PlayerName = "Test1";
        Display();
    }

    public void SubtractScore()
    {
        playerController.Score -= 10;
        playerController.PlayerName = "Test2";
        Display();
    }

    public void Save()
    {
        SaveLoadSystem.SavePlayer(playerController);
    }

    public void Load()
    {
        PlayerData playerData = SaveLoadSystem.LoadPlayer();
        if (playerData != null)
        {
            playerController.Score = playerData.score;
            playerController.PlayerName = playerData.playerName;
            Display();
            Debug.Log("Loaded");
        }
    }
    #endregion
}
