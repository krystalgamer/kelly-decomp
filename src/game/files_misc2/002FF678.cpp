class vr_pmesh {
    char padding[0x6C];
    bool has_translucent_verts;
public:
    bool get_distance_fade_ok() const;
};

bool vr_pmesh::get_distance_fade_ok() const {
    return !has_translucent_verts;
}
