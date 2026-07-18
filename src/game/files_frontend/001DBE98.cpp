class ReplayWidget {
    char padding[0x8];
    int vcrButton;
public:
    int GetButton();
};

int ReplayWidget::GetButton() {
    return vcrButton;
}
