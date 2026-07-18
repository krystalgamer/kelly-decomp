class fluid_bar {
    char padding[0x164];
    float height;
public:
    float get_height();
};

float fluid_bar::get_height() {
    return height;
}
