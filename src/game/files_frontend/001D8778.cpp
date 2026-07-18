class vector3d { public: float x; float y; float z; vector3d(float ix, float iy, float iz) : x(ix), y(iy), z(iz) {} };
class TextString { public: vector3d GetLocation3D(); };
vector3d TextString::GetLocation3D() { return vector3d(0.0f, 0.0f, 0.0f); }
