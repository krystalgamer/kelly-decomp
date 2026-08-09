#ifndef BEACH_H
#define BEACH_H

#include "KS/SRC/algebra.h"
#include "KS/SRC/ks/judge.h"

class beach_object;
class entity;

class beach {
public:
    JudgingSystem judges;
    vector3d travel_distance;

private:
    beach_object *my_objects;
    int current_breakmap;
    int num_breakmap;
    entity *smashedEntity;
    void *challenge_icon;
    void *challenge_photo;

public:
    beach();
    ~beach();
    void cleanup();
    void add_object(beach_object *object);
    beach_object *get_object(int index) const;
    void complete_goal(int goal);
};

extern beach *g_beach_ptr;

__asm__(".equ g_beach_ptr, 0x0043F710");

#endif
