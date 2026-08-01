#ifndef MATFAC_H
#define MATFAC_H

class nglMaterial {
    char fields[0x108];

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

private:
    nglMaterial material;
};

#endif
