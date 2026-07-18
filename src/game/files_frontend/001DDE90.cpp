class CreditsFrontEnd {
    char padding[0x170];
    bool up_pressed;
public:
    void OnUp(int controller);
};

void CreditsFrontEnd::OnUp(int controller) {
    up_pressed = true;
}
