#ifndef PHYSICS_H
#define PHYSICS_H

#pragma interface

#include "KS/SRC/algebra.h"

class PhysicsObjectClass {
public:
    PhysicsObjectClass();
    ~PhysicsObjectClass();

    float mass;
    float inverseMass;
    vector3d force;
    vector3d velocity;
    vector3d position;
    char po_state[0x44];
    vector3d linMom;
};

#endif
