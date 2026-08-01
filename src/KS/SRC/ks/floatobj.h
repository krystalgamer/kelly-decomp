#ifndef FLOATOBJ_H
#define FLOATOBJ_H

#include "KS/SRC/color.h"
#include "KS/SRC/entity.h"
#include "KS/SRC/stringx.h"
#include "KS/SRC/algebra.h"
#include "decomp_annotations.h"

#pragma interface

inline void entity::set_render_color(color32 color)
{
    *(unsigned int *)&render_color = color.value;
}

class trail;

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
    virtual void collide(entity*, const vector3d&);
    virtual void jumped_over(entity*);
    virtual void sprayed(entity*);
    virtual int get_type() const;

protected:
    color32 ren_col;
    float my_max_alpha;
    char water_data[0x28C];
};

class floating_object : public water_object {
public:
    floating_object(entity *, const stringx &);
    virtual ~floating_object();
    bool parse_params(char **arguments, int count);
    virtual void get_settings(const floating_object &other);
    void spawn();
    bool update(float time_inc);
    virtual void collide(entity *, const vector3d &);

private:
    float desired_dy;
    float current_dy;
    float max_dy;
    float speed_dy;
    float desired_angle;
    float current_angle;
    float max_angle;
    float speed_angle;
    float water_interaction;
};

class surfing_object : public water_object {
public:
    surfing_object(entity*, const stringx&, const stringx&);
    virtual ~surfing_object();
    virtual void spawn();
    virtual void despawn();
    virtual bool update(float);
    virtual void collide(entity*, const vector3d&);
    virtual void jumped_over(entity*);
    virtual void sprayed(entity*);
    virtual bool is_surfing_object();
    virtual int get_type() const;

private:
    int mySound;
    generic_anim* my_anim_handler;
    bool dummy_ai(vector3d &, vector3d &, float);
    bool floating_ai(vector3d &, vector3d &, float);
    bool boogie_ai(vector3d &, vector3d &, float);
    bool surfer1_ai(vector3d &, vector3d &, float);
    bool surfer2_ai(vector3d &, vector3d &, float);
    bool kayaker_ai(vector3d &, vector3d &, float);
    bool fatbastard_ai(vector3d &, vector3d &, float);
    bool swimmer_ai(vector3d &, vector3d &, float);
    bool cameraman_ai(vector3d &, vector3d &, float);
    bool dolphin_ai(vector3d &, vector3d &, float);
    bool greatwhite_ai(vector3d &, vector3d &, float);
    bool seal_ai(vector3d &, vector3d &, float);
    bool seagull_ai(vector3d &, vector3d &, float);
    bool outrigger_ai(vector3d &, vector3d &, float);
    bool humpback_ai(vector3d &, vector3d &, float);
    bool windsurfer_ai(vector3d &, vector3d &, float);
    bool hammerhead_ai(vector3d &, vector3d &, float);
    bool mantaray_ai(vector3d &, vector3d &, float);
    bool fisherman_ai(vector3d &, vector3d &, float);
    bool turtle_ai(vector3d &, vector3d &, float);
    bool jetskier_ai(vector3d &, vector3d &, float);
    bool snorkeler_ai(vector3d &, vector3d &, float);
    bool dingy_ai(vector3d &, vector3d &, float);
    bool icepatch_ai(vector3d &, vector3d &, float);
    bool kelp_ai(vector3d &, vector3d &, float);
    bool helicopter_ai(vector3d &, vector3d &, float);
    bool (surfing_object::*ai_func)(vector3d &, vector3d &, float);
    int my_type;
    float timer;
    float timer2;
    float turn_amount;
    float turn_rate;
    float lean_amount;
    float my_idle_delay;
    float tilt_amount;
    vector3d velocity;
    trail *my_trail;
    entity *my_board_entity;
    entity *my_third_entity;
    stringx my_base_name;
    int my_state;
    int my_previous_state;
    stringx *my_name_anims;
    int my_num_anims;
    stringx *my_board_name_anims;
    int my_board_num_anims;
    vector3d offset;
    float extra_turn;
    float total_extra_turn;
};

__asm__(".equ __7stringx, 0x0034D3E0");
__asm__(".equ __as__7stringxRC7stringx, 0x0034E0B8");
__asm__(".equ _vt$12generic_anim, 0x004D6030");
__asm__(".equ _vt$17generic_anim_misc, 0x004D6000");
__asm__(".equ construct__17generic_anim_miscPP6entityRC7stringxT2PPCci, 0x0020A568");

#endif
