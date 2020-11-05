[System.Serializable]
public class PlayerData
{
    public int score;
    public string playerName;
    public float playerHealth;

    public PlayerData()
    {
        score = PlayerController.Score;
        playerName = PlayerController.PlayerName;
        playerHealth = PlayerInfo.PlayerHealth;
    }
}
