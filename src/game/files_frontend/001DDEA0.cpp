class CreditsFrontEnd {
    char padding[0x174];
    bool down_pressed;
public:
    void OnDown(int controller);
};

void CreditsFrontEnd::OnDown(int controller) {
    down_pressed = true;
}
