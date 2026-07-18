class NamesMenu {
    char padding[0x1FC];
    int active_card;
public:
    int ActiveCard() {
        return active_card;
    }
};

class SaveLoadFrontEnd {
    char padding[0x32F4];
    NamesMenu* NameMenu;
public:
    int getActiveCard();
};

int SaveLoadFrontEnd::getActiveCard() {
    return NameMenu->ActiveCard();
}
