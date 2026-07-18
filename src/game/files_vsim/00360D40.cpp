class fluid_bar {
    char padding[0x160];
    float width;
public:
    float get_width();
};

float fluid_bar::get_width() {
    return width;
}
