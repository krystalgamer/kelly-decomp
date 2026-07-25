#ifndef KELLY_DECOMP_FLOATOBJ_SHARED_H
#define KELLY_DECOMP_FLOATOBJ_SHARED_H

#include "KS/SRC/stringx.h"
#include "decomp_annotations.h"

#if !defined(KELLY_DECOMP_FLOATOBJ_EMIT_VTABLES)
#pragma interface
#endif

class entity;
class vector3d;

class color32 {
public:
    unsigned int value;
};

class generic_anim {
public:
    inline generic_anim() {}
    inline generic_anim(const stringx &path, const stringx &name)
    {
        my_base_name = name;
        dummy = false;
        cur_state = cur_anim = 0;
        left_down = right_down = false;
    }
    virtual ~generic_anim();
    virtual void update(bool collide, bool jump, bool spray, float* alpha) = 0;
    virtual void spawn() = 0;
    virtual void switch_anims() = 0;

protected:
    stringx my_base_name;
    int cur_state;
    int cur_anim;
    bool dummy;
    bool left_down;
    bool right_down;
};

class generic_anim_misc : public generic_anim {
    static const char *generic_anim_names[];
    int generic_anims[5];
    int generic_anim_state;
    int items_count;
    stringx *items_prefixes;
    entity **my_entities;

public:
    generic_anim_misc(
        entity **entities,
        const stringx &path,
        const stringx &name,
        const char **prefixes,
        int count);
    virtual ~generic_anim_misc();
    void construct(
        entity **entities,
        const stringx &path,
        const stringx &name,
        const char **prefixes,
        int count);
    void update(bool collide, bool jump, bool spray, float *alpha);
    void spawn();
    void switch_anims();
};

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
    void set_target_active(bool value) { *(bool*)((char*)this + 0x24) = value; }
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

protected:
    color32 ren_col;
    float my_max_alpha;
    char water_data[0x28C];
};

class surfing_object : public water_object {
public:
    surfing_object(entity*, const stringx&, const stringx&);
    virtual ~surfing_object();
    virtual void jumped_over(entity*);
    virtual void sprayed(entity*);

private:
    int mySound;
    generic_anim* my_anim_handler;
};

__asm__(".equ __7stringx, 0x0034D3E0");
__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
__asm__(".equ _vt$12generic_anim, 0x004D6030");
__asm__(".equ _vt$17generic_anim_misc, 0x004D6000");
__asm__(".equ construct__17generic_anim_miscPP6entityRC7stringxT2PPCci, 0x0020A568");

#endif
