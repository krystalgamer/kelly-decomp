class collision_capsule {
    char padding[0x40];
    float radius;
public:
    float get_core_radius() const;
};

float collision_capsule::get_core_radius() const {
    return radius;
}
