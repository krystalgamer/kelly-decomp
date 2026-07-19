// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF640)
// 0x002FF640 get_min_faces__C8vr_pmeshf
class vr_pmesh {
    char padding[0x20];
    int min_faces;
public:
    int get_min_faces(float delta_t) const;
};

int vr_pmesh::get_min_faces(float delta_t) const {
    return min_faces;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF648)
// 0x002FF648 get_max_faces__C8vr_pmeshf
class vr_pmesh {
    char padding[0x34];
    int num_faces;
public:
    int get_max_faces(float delta_t) const;
};

int vr_pmesh::get_max_faces(float delta_t) const {
    return num_faces;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF650)
// 0x002FF650 get_center__C8vr_pmeshf
class vector3d {
    float x;
    float y;
    float z;
};

class vr_pmesh {
    char padding[0x78];
    vector3d center;
public:
    const vector3d& get_center(float delta_t) const;
};

const vector3d& vr_pmesh::get_center(float delta_t) const {
    return center;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF658)
// 0x002FF658 get_radius__C8vr_pmeshf
class vr_pmesh {
    char padding[0x84];
    float radius;
public:
    float get_radius(float delta_t) const;
};

float vr_pmesh::get_radius(float delta_t) const {
    return radius;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF660)
// 0x002FF660 get_max_detail__C8vr_pmesh
class vr_pmesh {
    char padding[0xA4];
    int max_detail;
public:
    int get_max_detail() const;
};

int vr_pmesh::get_max_detail() const {
    return max_detail;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF678)
// 0x002FF678 get_distance_fade_ok__C8vr_pmesh
class vr_pmesh {
    char padding[0x6C];
    bool has_translucent_verts;
public:
    bool get_distance_fade_ok() const;
};

bool vr_pmesh::get_distance_fade_ok() const {
    return !has_translucent_verts;
}
#endif
