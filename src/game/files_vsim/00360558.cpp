class menu_item_widget {
    char padding[0x150];
    bool selected;
public:
    void deselect(bool initial);
};

void menu_item_widget::deselect(bool initial) {
    selected = false;
}
