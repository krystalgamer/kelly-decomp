class box_widget {
    char padding[0x164];
    float width;
public:
    float get_width();
};

float box_widget::get_width() {
    return width;
}
