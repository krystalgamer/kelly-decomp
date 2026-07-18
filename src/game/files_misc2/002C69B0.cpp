class vector3d { public: float x; float y; float z; vector3d(float ix, float iy, float iz) : x(ix), y(iy), z(iz) {} };
class marky_camera { public: vector3d camera_get_target(); };
vector3d marky_camera::camera_get_target() { return vector3d(0.0f, 0.0f, 0.0f); }
