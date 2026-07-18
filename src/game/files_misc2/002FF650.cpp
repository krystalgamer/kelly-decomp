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
