class AnalogClockWidget {
    char padding[0x10];
    float elapsedInterval;

public:
    void HideElapsedTime();
};

void AnalogClockWidget::HideElapsedTime() {
    elapsedInterval = 0.0f;
}
