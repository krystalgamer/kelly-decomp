class FEMenu {
    char padding[0x54];
    FEMenu* back;
    int back_num;
public:
    void setBack(FEMenu* menu, int number);
};

void FEMenu::setBack(FEMenu* menu, int number) {
    back = menu;
    back_num = number;
}
