class cg_mesh {
    char padding[0x6C];
    float radius;
public:
    float get_radius() const;
};

float cg_mesh::get_radius() const {
    return radius;
}
