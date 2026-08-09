#ifndef VECTOR_FILTER_H
#define VECTOR_FILTER_H

#include "KS/SRC/algebra.h"

class vector_filter {
    float xwPos[2];
    float ywPos[2];
    float zwPos[2];
    float xerr[2];
    float yerr[2];
    float zerr[2];

public:
    void Init_Filter(const vector3d &start);
};

#endif
