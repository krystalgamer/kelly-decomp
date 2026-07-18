class vr_pmesh {
    char padding[0x34];
    int num_faces;
public:
    int get_max_faces(float delta_t) const;
};

int vr_pmesh::get_max_faces(float delta_t) const {
    return num_faces;
}
