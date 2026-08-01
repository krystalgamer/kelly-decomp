#ifndef GUIDANCE_SYS_H
#define GUIDANCE_SYS_H

#pragma interface

#include "KS/SRC/algebra.h"

class entity;
class physical_interface;

class guidance_system {
protected:
    physical_interface *owner;
    int flags;

public:
    enum eGuidanceSysType {
        GUIDANCE_GENERIC,
        GUIDANCE_ROCKET,
        GUIDANCE_UNKNOWN
    };

    guidance_system(physical_interface *owner);
    virtual ~guidance_system();
    virtual eGuidanceSysType get_type();
    virtual void frame_advance(float time_inc);
    virtual void launch(const vector3d &direction, float force);
};

class rocket_guidance_sys : public guidance_system {
    vector3d target_pos;
    entity *target;
    float launch_force;
    float wobble_timer;
    float guidance_delay;
    float accel_delay;
    float guided_accuracy;
    float turn_factor;
    float accel_factor;
    float full_wobble_timer;
    float full_guidance_delay;
    float full_accel_delay;
    float wobble_timer_var;
    float guidance_delay_var;
    float accel_delay_var;

public:
    rocket_guidance_sys(physical_interface *owner);
    virtual ~rocket_guidance_sys();
    virtual eGuidanceSysType get_type();
    virtual void frame_advance(float time_inc);
    virtual void launch(const vector3d &direction, float force);
};

#endif
