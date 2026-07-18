class box_widget {
    char padding[0x168];
    float height;
public:
    float get_height();
};

float box_widget::get_height() {
    return height;
}
