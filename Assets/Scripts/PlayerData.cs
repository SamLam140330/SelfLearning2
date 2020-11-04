[System.Serializable]
public class PlayerData
{
    public int score;
    public string playerName;

    public PlayerData(PlayerController playerController)
    {
        score = playerController.Score;
        playerName = playerController.PlayerName;
    }
}
