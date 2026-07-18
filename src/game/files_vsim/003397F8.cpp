class material {
    char padding[0x100];
    unsigned int mat_flags;
public:
    void set_flags(unsigned int value);
};

void material::set_flags(unsigned int value) {
    mat_flags = value;
}
