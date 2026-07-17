class entity {
    char padding[0x90];
    float radius;

public:
    float get_radius() const;
};

float entity::get_radius() const {
    return radius;
}
