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
