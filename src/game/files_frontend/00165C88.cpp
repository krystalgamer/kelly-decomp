class AnalogClockWidget {
    char padding[0x10];
    float elapsedInterval;

public:
    void ShowElapsedTime(float time);
};

void AnalogClockWidget::ShowElapsedTime(float time) {
    elapsedInterval = time;
}
