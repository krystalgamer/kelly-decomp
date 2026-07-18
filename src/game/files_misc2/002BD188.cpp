class material;

class mat_fac {
    char padding[0x4];
    material* m_pcmat;
public:
    bool has_texture() const;
};

bool mat_fac::has_texture() const {
    return m_pcmat != 0;
}
