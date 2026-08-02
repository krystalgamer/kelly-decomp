#ifndef MATFAC_H
#define MATFAC_H

class nglMaterial {
public:
    unsigned int Flags;
    void *Map;
    char fields_to_map_blend_mode[0x30];
    int MapBlendMode;

private:
    char fields[0xCC];

public:
    nglMaterial();
};

class mat_fac {
public:
    mat_fac();
    mat_fac(const mat_fac &other);
    virtual ~mat_fac();
    mat_fac &operator=(const mat_fac &other);
    int get_anim_length() const;
    bool is_translucent() const;
    bool has_texture() const;

private:
    nglMaterial material;
    char material_abi_padding[8];
};

#endif
