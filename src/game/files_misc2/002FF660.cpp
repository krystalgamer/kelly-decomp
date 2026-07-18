class vr_pmesh {
    char padding[0xA4];
    int max_detail;
public:
    int get_max_detail() const;
};

int vr_pmesh::get_max_detail() const {
    return max_detail;
}
