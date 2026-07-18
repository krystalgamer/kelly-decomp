class menu_item_widget {
    char padding[0x154];
    bool skip;
public:
    void set_skip(bool value);
};

void menu_item_widget::set_skip(bool value) {
    skip = value;
}
