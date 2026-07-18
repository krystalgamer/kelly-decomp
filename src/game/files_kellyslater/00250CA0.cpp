class SpecialMeter {
    char padding[0x4];
    int playerIdx;
public:
    void Initialize(int index);
};

void SpecialMeter::Initialize(int index) {
    playerIdx = index;
}
