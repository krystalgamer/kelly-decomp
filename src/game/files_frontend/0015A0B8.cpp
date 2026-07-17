class IGOTutorialManager {
    char padding[0x44];
    int current_gap;

public:
    void SetCurrentGap(int gap);
};

void IGOTutorialManager::SetCurrentGap(int gap) {
    current_gap = gap;
}
