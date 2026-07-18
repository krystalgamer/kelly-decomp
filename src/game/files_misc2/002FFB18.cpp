class cg_mesh { char padding[0x64]; int flags; public: bool is_camera_collision() const; };
bool cg_mesh::is_camera_collision() const { return (flags >> 3) & 1; }
