[System.Serializable]
public class PlayerData
{
    public int score;
    public string playerName;

    public PlayerData(GameController gameController)
    {
        score = gameController.Score;
        playerName = gameController.PlayerName;
    }
}
