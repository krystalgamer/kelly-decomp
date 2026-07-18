class ScoringManager {
    char padding[0x1D4];
    float mouthDist;
public:
    void SetMouthDist(float dist);
};

void ScoringManager::SetMouthDist(float dist) {
    mouthDist = dist;
}
