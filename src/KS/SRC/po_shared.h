#ifndef KELLY_DECOMP_PO_SHARED_H
#define KELLY_DECOMP_PO_SHARED_H

class vector4d {
public:
    float x;
    float y;
    float z;
    float w;
};

class matrix4x4 {
public:
    vector4d x __attribute__((aligned(16)));
    vector4d y;
    vector4d z;
    vector4d w;
};

class po {
    matrix4x4 m;
};

#endif
