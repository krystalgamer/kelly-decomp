// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF2B8)
// 0x002FF2B8 apply_radius_scale__18collision_geometryf
class collision_geometry {
public:
    void apply_radius_scale(float scale);
};

void collision_geometry::apply_radius_scale(float scale) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF2C0)
// 0x002FF2C0 split_xform__18collision_geometryRC2poT1i
class po;

class collision_geometry {
public:
    void split_xform(const po& first, const po& second, int second_start);
};

void collision_geometry::split_xform(const po& first, const po& second, int second_start) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF2C8)
// 0x002FF2C8 split_xform__18collision_geometryRC2poN21ii
// Released signature: collision_geometry::split_xform(
//     const po&, const po&, const po&, int, int).
void split_xform_stub() asm(
    "split_xform__18collision_geometryRC2poN21ii"
);

void split_xform_stub() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF328)
// 0x002FF328 get_abs_position__C18collision_geometry
class vector3d { float x; float y; float z; };
struct entity_position_holder { char padding[0x30]; vector3d position; };
struct entity { char padding[0x50]; entity_position_holder* absolute; };
class collision_geometry { entity* owner; public: const vector3d& get_abs_position() const; };
const vector3d& collision_geometry::get_abs_position() const { return owner->absolute->position; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF388)
// 0x002FF388 get_pivot__C18collision_geometry
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
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF3A0)
// 0x002FF3A0 is_pivot_valid__C18collision_geometry
class collision_geometry {
public:
    bool is_pivot_valid() const;
};

bool collision_geometry::is_pivot_valid() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF3A8)
// 0x002FF3A8 is_entity_collision__C18collision_geometry
class collision_geometry {
public:
    bool is_entity_collision() const;
};

bool collision_geometry::is_entity_collision() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF3B0)
// 0x002FF3B0 is_camera_collision__C18collision_geometry
class collision_geometry {
public:
    bool is_camera_collision() const;
};

bool collision_geometry::is_camera_collision() const {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF430)
// 0x002FF430 get_closest_point_along_dir__C7cg_noneP8vector3dRC8vector3d
struct vector3d { float x; float y; float z; vector3d &operator=(const vector3d &other) { x = other.x; y = other.y; z = other.z; return *this; } };
extern const vector3d global_ZEROVEC;
__asm__(".equ global_ZEROVEC, 0x005887F0");
class cg_none { public: void get_closest_point_along_dir(vector3d *target, const vector3d &direction) const; };
void cg_none::get_closest_point_along_dir(vector3d *target, const vector3d &direction) const { *target = global_ZEROVEC; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF300)
// 0x002FF300 get_core_radius__C18collision_geometry
struct collision_vtable_layout { char padding[0x38]; short adjustment; short padding2; float (*get_radius)(void *self); };
class collision_geometry { char padding[8]; collision_vtable_layout *vtable; public: float get_core_radius() const; };
float collision_geometry::get_core_radius() const { collision_vtable_layout *table = vtable; return table->get_radius((char *)this + table->adjustment); }
#endif
