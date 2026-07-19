// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002C6200)
// 0x002C6200 camera_set_roll__12marky_cameraf
class marky_camera {
    char padding[0x2DC];
    float roll;
public:
    void camera_set_roll(float angle);
};

void marky_camera::camera_set_roll(float angle) {
    roll = angle;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002C69B0)
// 0x002C69B0 camera_get_target__12marky_camera
class vector3d { public: float x; float y; float z; vector3d(float ix, float iy, float iz) : x(ix), y(iy), z(iz) {} };
class marky_camera { public: vector3d camera_get_target(); };
vector3d marky_camera::camera_get_target() { return vector3d(0.0f, 0.0f, 0.0f); }
#endif
