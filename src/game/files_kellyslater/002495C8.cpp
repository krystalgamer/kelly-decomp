class ScoringManager {
public:
    class Chain {
        char padding[0x4];
        float multAdder;
    public:
        void SetMultAdder(float value);
    };
};

void ScoringManager::Chain::SetMultAdder(float value) {
    multAdder = value;
}
