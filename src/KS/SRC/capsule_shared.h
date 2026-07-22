#ifndef KELLY_DECOMP_CAPSULE_SHARED_H
#define KELLY_DECOMP_CAPSULE_SHARED_H

class entity;

class vector3d {
    float x;
    float y;
    float z;
};

class capsule {
public:
    vector3d base;
    vector3d end;
    float radius;
};

class collision_geometry {
protected:
    entity *owner;
    int flags;

public:
    collision_geometry();
    virtual ~collision_geometry();
};

class collision_capsule : public collision_geometry {
    capsule relative_capsule;
    capsule absolute_capsule;
    vector3d lag_point;

public:
    collision_capsule(entity *owner);
    virtual ~collision_capsule();
    void compute_dimensions();
};

#endif
