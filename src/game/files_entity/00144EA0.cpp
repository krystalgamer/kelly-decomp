class vector3d {
    float x;
    float y;
    float z;
};

extern const vector3d entity_zero_vector;
__asm__(".equ entity_zero_vector, 0x00513840");

class entity {
public:
    const vector3d& get_water_normal() const;
};

const vector3d& entity::get_water_normal() const {
    return entity_zero_vector;
}
