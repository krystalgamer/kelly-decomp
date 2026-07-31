#ifndef KELLY_DECOMP_AI_LOCOMOTION_SHARED_H
#define KELLY_DECOMP_AI_LOCOMOTION_SHARED_H

#include "KS/SRC/algebra.h"

typedef float rational_t;
typedef float time_value_t;

class ai_interface;
class chunk_file;
class stringx;
class pstring;

enum eLocomotionType {
    LOCOMOTION_NONE,
    LOCOMOTION_DIRECT,
    LOCOMOTION_WALK,
    LOCOMOTION_WINGED,
    LOCOMOTION_HELI
};

class ai_locomotion {
protected:
    char data_before_patrol_radius[112];
    rational_t patrol_radius;
    time_value_t has_been_stuck_for_how_long;
    vector3d previous_pos;
    vector3d local_dest;
    vector3d start_pos;
    vector3d last_pos;
    vector3d target_pos;
    rational_t tgtrange;
    bool running_speed;
    bool use_path;
    int path_tries;
    bool wait_until_reached;
    bool wait_for_facing;
    bool in_service;
    eLocomotionType type;
    bool facing;
    bool playing_face_anim;
    vector3d face_dir;
    rational_t turn_speed;
    rational_t jockey_timer;
    rational_t jockey_stuck_timer;
    vector3d last_jockey_pos;
    vector3d jockey_pos;
    vector3d jockey_dir;
    rational_t jockey_speed;
    bool jockey;
    bool use_45_jockey;
    int jockey_anim_a;
    int jockey_anim_b;
    time_value_t repulsion_timer;
    vector3d repulsion_local_dest;
    time_value_t repulsion_wait_timer;
    bool repulsion_wait;

    virtual ai_locomotion *make_copy(ai_interface *owner);
    virtual bool set_path(
        const vector3d &destination,
        rational_t weight = 0.5f,
        bool force_path = false);
    virtual void set_goto_path(
        rational_t weight = 0.0f,
        bool force_path = false);
    virtual void going_into_service();
    virtual void going_out_of_service();
    virtual void handle_chunk(chunk_file &file, stringx &label);
    virtual void adjust_jockey_animation(
        const vector3d &direction,
        time_value_t time);

public:
    virtual ~ai_locomotion();
    virtual bool frame_advance(time_value_t time);
    virtual bool process_movement(time_value_t time);
    virtual bool set_destination(
        const vector3d &position,
        rational_t radius = 2.0f,
        bool fast = true,
        bool path_find = true,
        bool force_finish = false)
        __asm__("set_destination__13ai_locomotionRC8vector3dfbN23");
    virtual bool set_facing(
        const vector3d &direction,
        rational_t weight = 1.0f);
    virtual bool set_facing_point(
        const vector3d &point,
        rational_t weight = 1.0f);
    virtual bool set_num(const pstring &attribute, rational_t value);
    virtual bool get_num(const pstring &attribute, rational_t &value);

    void clear_path();
};

class ai_locomotion_direct : public ai_locomotion {
protected:
    virtual ai_locomotion *make_copy(ai_interface *owner);
    virtual void going_into_service();
    virtual void going_out_of_service();
    virtual void handle_chunk(chunk_file &file, stringx &label);

public:
    virtual ~ai_locomotion_direct();
    virtual bool set_destination(
        const vector3d &position,
        rational_t radius = 2.0f,
        bool fast = true,
        bool path_find = true,
        bool force_finish = false)
        __asm__(
            "set_destination__20ai_locomotion_direct"
            "RC8vector3dfbN23");
    virtual bool process_movement(time_value_t time);
};

extern const vector3d ZEROVEC;

#endif
