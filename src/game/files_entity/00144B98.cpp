class entity {
    char padding[0x90];
    float radius;

public:
    void set_radius(float value);
};

void entity::set_radius(float value) {
    radius = value;
}
