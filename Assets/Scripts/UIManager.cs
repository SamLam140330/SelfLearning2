using TMPro;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI playerHealthTxt = null;
    [SerializeField] private TextMeshProUGUI playerNameTxt = null;
    [SerializeField] private TextMeshProUGUI playerScoreTxt = null;

    public void OnAddHealthClicked()
    {
        DataManager.PlayerHealth += 5;
        playerHealthTxt.SetText("Score: " + DataManager.PlayerHealth.ToString());
    }

    public void OnSubtractHealthClicked()
    {
        DataManager.PlayerHealth -= 5;
        playerHealthTxt.SetText("Score: " + DataManager.PlayerHealth.ToString());
    }

    public void OnAddScoreClicked()
    {
        DataManager.PlayerScore += 10;
        playerScoreTxt.SetText("Score: " + DataManager.PlayerScore.ToString());
    }

    public void OnSubtractScoreClicked()
    {
        DataManager.PlayerScore -= 10;
        playerScoreTxt.SetText("Score: " + DataManager.PlayerScore.ToString());
    }

    public void OnSaveClicked()
    {
        SaveLoadSystem.SavePlayer();
    }

    public void OnLoadClicked()
    {
        PlayerData playerData = SaveLoadSystem.LoadPlayer();
        if (playerData != null)
        {
            DataManager.PlayerHealth = playerData.playerHealth;
            DataManager.PlayerName = playerData.playerName;
            DataManager.PlayerScore = playerData.playerScore;
            playerHealthTxt.SetText("Health: " + DataManager.PlayerHealth.ToString());
            playerNameTxt.SetText("Name: " + DataManager.PlayerName);
            playerScoreTxt.SetText("Score: " + DataManager.PlayerScore.ToString());
            Debug.Log("Loaded");
        }
    }
}
