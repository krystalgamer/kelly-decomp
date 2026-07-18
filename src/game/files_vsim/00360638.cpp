class menu_item_widget;

class menu_widget {
    char padding[0x148];
    menu_item_widget* sel_item;
public:
    menu_item_widget* get_sel_item() const;
};

menu_item_widget* menu_widget::get_sel_item() const {
    return sel_item;
}
