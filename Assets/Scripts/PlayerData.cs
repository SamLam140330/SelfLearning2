[System.Serializable]
public class PlayerData
{
    public float playerHealth;
    public string playerName;
    public int playerScore;

    public PlayerData()
    {
        playerHealth = DataManager.PlayerHealth;
        playerName = DataManager.PlayerName;
        playerScore = DataManager.PlayerScore;
    }
}
