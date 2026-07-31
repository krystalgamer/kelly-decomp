#ifndef CAMERA_H
#define CAMERA_H

#pragma interface

#include "KS/SRC/entity.h"
#include "KS/SRC/po.h"

class kellyslater_controller;
class mic;

class camera : public entity {
protected:
    mic *microphone;

public:
    camera(
        entity *parent,
        const entity_id &id,
        entity_flavor_t flavor = ENTITY_CAMERA);
    virtual ~camera();
    virtual bool is_a_camera() const;
    virtual void sync(camera &other);
    virtual void Reset();
    inline bool is_externally_controlled() {
        return (*(int *)((char *)this + 0x78) >> 20) & 1;
    }
};

class game_camera : public camera {
public:
    game_camera(
        const entity_id &id,
        entity *target = 0);
    virtual ~game_camera();
    virtual void sync(camera &other);
    virtual void frame_advance(time_value_t time);
    inline void set_ks_controller(
        kellyslater_controller *controller)
    {
        ksctrl = controller;
    }
    virtual void init();
    virtual vector3d GetStartPosition();
    virtual bool is_a_game_camera() const;

protected:
    bool last_frame_valid;
    kellyslater_controller *ksctrl;

private:
    entity *target_entity;
    bool reset_old_elevation;
    vector3d targ_ent_pos;
    rational_t targ_ent_elev;
    rational_t last_frame_target_elev;
    rational_t last_frame_focus_y;
    bool temporary_lock;
    po ground_pitch_po;
    po last_frame_po;
    bool crawl_mode;
    bool crawl_mode_firstperson;
};

class marky_camera : public game_camera {
public:
    explicit marky_camera(const entity_id &id);
    virtual ~marky_camera();
    virtual bool is_a_marky_camera() const;
    virtual void frame_advance(time_value_t time);
    virtual void sync(camera &other);
    virtual void camera_set_target(const vector3d &position);
    virtual vector3d camera_get_target();
    virtual void camera_set_roll(rational_t angle);
    virtual void camera_set_collide_with_world(bool value);
    inline rational_t get_priority() const {
        return current_priority;
    }

private:
    vector3d target;
    float roll;
    bool do_collide_with_world;
    vector3d last_frame_pos;
    rational_t current_priority;
};

#endif
