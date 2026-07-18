class FEMenu {
    char padding[0x60];
    FEMenu* active;
public:
    FEMenu* GetActive();
};

FEMenu* FEMenu::GetActive() {
    return active;
}
