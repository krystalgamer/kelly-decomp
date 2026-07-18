class vector3d { float x; float y; float z; };
extern const vector3d collision_zero_pivot;
__asm__(".equ collision_zero_pivot, 0x005887F0");

class collision_geometry {
public:
    const vector3d& get_pivot() const;
};

const vector3d& collision_geometry::get_pivot() const {
    return collision_zero_pivot;
}
