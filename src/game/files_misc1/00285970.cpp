class PushMode {
    char padding[0x44];
    int scoreRequired;
public:
    void SetDifficulty(int points);
};

void PushMode::SetDifficulty(int points) {
    scoreRequired = points;
}
