class cg_mesh {
    char padding[0x64];
    unsigned int flags;
public:
    bool is_pivot_valid() const;
};

bool cg_mesh::is_pivot_valid() const {
    return flags & 1;
}
