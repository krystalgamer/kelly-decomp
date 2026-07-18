class kellyslater_controller {
    char padding_to_current[0x18F4];
    int currentTrick;
    int completedTrick;
    int newTrick;
public:
    void SetCurrentTrick();
};

void kellyslater_controller::SetCurrentTrick() {
    currentTrick = newTrick;
}
