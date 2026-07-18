class bitmap_widget {
    char padding[0x148];
    float height;
public:
    float get_height();
};

float bitmap_widget::get_height() {
    return height;
}
