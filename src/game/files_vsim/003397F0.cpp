class material {
    char padding[0x100];
    unsigned int mat_flags;
public:
    unsigned int get_flags() const;
};

unsigned int material::get_flags() const {
    return mat_flags;
}
