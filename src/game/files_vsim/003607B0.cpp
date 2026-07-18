class bitmap_widget {
    char padding[0x144];
    float width;
public:
    float get_width();
};

float bitmap_widget::get_width() {
    return width;
}
