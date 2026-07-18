class menu_widget {
    char padding[0x144];
    int num_items;
public:
    int get_num_items() const;
};

int menu_widget::get_num_items() const {
    return num_items;
}
