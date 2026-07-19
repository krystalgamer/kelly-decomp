// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00125228)
// 0x00125228 set_last_collision_normal__18physical_interfaceRC8vector3d
struct vector3d { float x; float y; float z; vector3d &operator=(const vector3d &other) { x = other.x; y = other.y; z = other.z; return *this; } };
class physical_interface { char padding[0x50]; vector3d last_collision_normal; public: void set_last_collision_normal(const vector3d &value); };
void physical_interface::set_last_collision_normal(const vector3d &value) { last_collision_normal = value; }
#endif
