class vector3d { float x; float y; float z; };
extern const vector3d billboard_center;
__asm__(".equ billboard_center, 0x004318B8");

class vr_billboard {
public:
    const vector3d& get_center(float delta_t) const;
};

const vector3d& vr_billboard::get_center(float delta_t) const {
    return billboard_center;
}
