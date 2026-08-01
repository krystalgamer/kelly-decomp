#ifndef JOINT_H
#define JOINT_H

#pragma interface

#include "KS/SRC/algebra.h"

class entity;

class joint {
protected:
    entity *a;
    float min;
    float max;
    vector3d axis_a;
    vector3d axis_b;
    vector3d loc_a;
    vector3d loc_b;
    int dim;
    float friction;
    bool kill_me;

public:
    joint() {}
    joint(
        entity *first,
        float minimum,
        float maximum,
        const vector3d &first_axis,
        const vector3d &second_axis,
        const vector3d &first_location,
        const vector3d &second_location,
        int dimension,
        float friction);
    virtual ~joint();
    virtual void frame_advance(float time_inc);
};

class linear_joint : public joint {
    bool one_sided;

public:
    linear_joint(
        entity *first,
        float minimum,
        float maximum,
        const vector3d &first_axis,
        const vector3d &second_axis,
        const vector3d &first_location,
        const vector3d &second_location,
        int dimension,
        float friction,
        bool one_sided);
    virtual ~linear_joint();
    virtual void frame_advance(float time_inc);
};

#endif
