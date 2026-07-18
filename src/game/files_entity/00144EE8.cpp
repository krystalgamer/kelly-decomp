class vector3d;

class entity {
public:
    float get_effective_collision_mass(const vector3d& location, const vector3d& direction) const;
};

float entity::get_effective_collision_mass(const vector3d& location, const vector3d& direction) const {
    return 0.0f;
}
