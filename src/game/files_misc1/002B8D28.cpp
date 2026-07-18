class vector3d {
    float x;
    float y;
    float z;
};

extern const vector3d trigger_zero_vector;
__asm__(".equ trigger_zero_vector, 0x00570198");

class trigger {
public:
    const vector3d& get_abs_position() const;
};

const vector3d& trigger::get_abs_position() const {
    return trigger_zero_vector;
}
