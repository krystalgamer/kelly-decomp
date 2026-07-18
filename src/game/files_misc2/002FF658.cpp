class vr_pmesh {
    char padding[0x84];
    float radius;
public:
    float get_radius(float delta_t) const;
};

float vr_pmesh::get_radius(float delta_t) const {
    return radius;
}
