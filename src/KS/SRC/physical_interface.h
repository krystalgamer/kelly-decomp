#ifndef PHYSICAL_INTERFACE_H
#define PHYSICAL_INTERFACE_H

#pragma interface

#include "KS/SRC/entity_interface.h"
#include "KS/SRC/algebra.h"

typedef float rational_t;
typedef float time_value_t;

class guidance_system;
extern const vector3d IGNORE_LOC;

class physical_interface : public entity_interface {
protected:
    unsigned int flags;
    rational_t mass;
    rational_t volume;
    vector3d velocity;
    vector3d angular_velocity;
    vector3d acceleration_factor;
    vector3d acceleration_correction_factor;
    vector3d last_acceleration_correction_factor;
    vector3d last_collision_normal;
    unsigned int collision_flags;
    bool stuck_parent_was_alive_last_frame;
    rational_t slide_factor;
    rational_t bounce_factor;
    rational_t sticky_offset;
    vector3d bounce_pos;
    vector3d bounce_norm;
    entity *bounce_ent;
    rational_t gravity_multiplier;

    void bounce(
        vector3d hit,
        vector3d hit_normal,
        entity *hit_entity = 0);
    void do_physics(time_value_t time);

    guidance_system *guide_sys;
    rational_t last_elevation;
    rational_t cur_elevation;
    bool effectively_standing;
    vector3d cur_normal;
    rational_t last_floor_offset;

public:
    physical_interface(entity *ent);
    virtual ~physical_interface();

    enum force_type {
        CONTINUOUS = 0,
        INSTANT = 1
    };

    inline rational_t get_mass() const {
        return mass;
    }
    inline void set_mass(rational_t value) {
        mass = value;
    }
    inline vector3d get_acceleration_factor() const {
        return acceleration_factor;
    }
    inline void set_acceleration_factor(const vector3d &value) {
        acceleration_factor = value;
    }
    inline vector3d get_acceleration_correction_factor() const {
        return acceleration_correction_factor;
    }
    inline void set_acceleration_correction_factor(
        const vector3d &value,
        int mods = 0)
    {
        acceleration_correction_factor = value;
    }
    inline bool is_effectively_standing() const {
        return effectively_standing;
    }
    bool using_velocity() const;
    void update_unused_velocity(time_value_t increment);
    void set_last_collision_normal(const vector3d &value);
    void destroy_guidance_sys();
    virtual void frame_advance(time_value_t time);
    virtual void apply_force_increment(
        const vector3d &force,
        force_type type,
        const vector3d &location = IGNORE_LOC,
        int mods = 0);
    virtual bool get_ifc_num(const pstring &attribute, rational_t &value);
    virtual bool set_ifc_num(const pstring &attribute, rational_t value);
    virtual bool get_ifc_vec(const pstring &attribute, vector3d &value);
    virtual bool set_ifc_vec(
        const pstring &attribute,
        const vector3d &value);
    void manage_standing(bool force = false);
    void compute_elevation();
    rational_t get_floor_offset();
};

#endif
