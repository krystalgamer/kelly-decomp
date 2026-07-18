class SpecialMeter {
    char padding[0x24];
    float current_special_time;
public:
    void SetUpSpecialTimer();
};

void SpecialMeter::SetUpSpecialTimer() {
    current_special_time = 0;
}
