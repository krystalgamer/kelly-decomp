#ifndef KELLY_DECOMP_FLOATOBJ_SHARED_H
#define KELLY_DECOMP_FLOATOBJ_SHARED_H

#include "KS/SRC/stringx.h"

#if !defined(KELLY_DECOMP_FLOATOBJ_EMIT_VTABLES)
#pragma interface
#endif

class entity;
class vector3d;

class beach_object {
public:
    beach_object(entity*, const stringx&);
    virtual ~beach_object();
    virtual void spawn() = 0;
    virtual void despawn() = 0;
    virtual bool update(float) = 0;
    virtual bool parse_params(char**, int);
    virtual void get_settings(const beach_object&);
    virtual void collide(entity*, const vector3d&);
    virtual void jumped_over(entity*);
    virtual void sprayed(entity*);
    virtual bool is_surfing_object();

    beach_object* next;
    float spawn_time;
    int timer_type;
    int times_spawned;
    bool spawned;
    bool smashable;
    bool active;
    bool never_despawn;

protected:
    bool physical;
    entity* my_entity;
    int spawn_count;
    stringx my_path;
    char abi_padding[4];
};

class beach_event : public beach_object {
public:
    beach_event(bool (*)(float, void**));
    virtual ~beach_event();
    void spawn();
    void despawn();
    bool update(float);

protected:
    bool (*my_func)(float, void**);
    void* my_func_data;
};

class beach_billboard : public beach_object {
public:
    beach_billboard(entity*, const stringx&);
    virtual ~beach_billboard();
    void spawn();
    void despawn();
    bool update(float);
};

class water_object : public beach_object {
public:
    water_object(entity*, const stringx&);
    virtual ~water_object();
    virtual void spawn();
    virtual void despawn();
    virtual bool update(float);
};

#endif
