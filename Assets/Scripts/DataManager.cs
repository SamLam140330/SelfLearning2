using UnityEngine;

public class DataManager : SingletonManager<DataManager>
{
    private static float _playerHealth;
    private static string _playerName;
    private static int _playerScore;

    public static float PlayerHealth { get { return _playerHealth; } set { _playerHealth = value; } }
    public static string PlayerName { get { return _playerName; } set { _playerName = value; } }
    public static int PlayerScore { get { return _playerScore; } set { _playerScore = value; } }

    private void Start()
    {
        _playerHealth = 100f;
        _playerName = "Default";
        _playerScore = 0;
    }
}
