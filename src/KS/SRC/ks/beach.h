#ifndef BEACH_H
#define BEACH_H

#include "KS/SRC/algebra.h"
#include "KS/SRC/ks/judge.h"

class beach_object;

class beach {
public:
    JudgingSystem judges;
    vector3d travel_distance;

private:
    beach_object *my_objects;

public:
    void add_object(beach_object *object);
    beach_object *get_object(int index) const;
    void complete_goal(int goal);
};

extern beach *g_beach_ptr;

__asm__(".equ g_beach_ptr, 0x0043F710");

#endif
