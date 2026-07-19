// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FFAE0)
// 0x002FFAE0 get_radius__C7cg_mesh
class cg_mesh {
    char padding[0x6C];
    float radius;
public:
    float get_radius() const;
};

float cg_mesh::get_radius() const {
    return radius;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFAE8)
// 0x002FFAE8 get_pivot__C7cg_mesh
class vector3d {
    float x;
    float y;
    float z;
};

class cg_mesh {
    char padding[0x58];
    vector3d pivot;
public:
    const vector3d& get_pivot() const;
};

const vector3d& cg_mesh::get_pivot() const {
    return pivot;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFAF8)
// 0x002FFAF8 is_pivot_valid__C7cg_mesh
class cg_mesh {
    char padding[0x64];
    unsigned int flags;
public:
    bool is_pivot_valid() const;
};

bool cg_mesh::is_pivot_valid() const {
    return flags & 1;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFB08)
// 0x002FFB08 is_entity_collision__C7cg_mesh
class cg_mesh { char padding[0x64]; int flags; public: bool is_entity_collision() const; };
bool cg_mesh::is_entity_collision() const { return (flags >> 2) & 1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFB18)
// 0x002FFB18 is_camera_collision__C7cg_mesh
class cg_mesh { char padding[0x64]; int flags; public: bool is_camera_collision() const; };
bool cg_mesh::is_camera_collision() const { return (flags >> 3) & 1; }
#endif
