class vr_pmesh {
    char padding[0x20];
    int min_faces;
public:
    int get_min_faces(float delta_t) const;
};

int vr_pmesh::get_min_faces(float delta_t) const {
    return min_faces;
}
