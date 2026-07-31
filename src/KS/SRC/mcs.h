#ifndef MCS_H
#define MCS_H

#pragma interface

#include "KS/SRC/mobject.h"

typedef float rational_t;
typedef float time_value_t;

class entity;

class motion_control_system : public motion_object {
public:
    motion_control_system();
    virtual ~motion_control_system();
    virtual void frame_advance(time_value_t time_inc) = 0;

protected:
    entity *ent;
};

class theta_and_psi_mcs : public motion_control_system {
public:
    theta_and_psi_mcs(
        entity *owner,
        rational_t theta = 0,
        rational_t psi = 0);
    virtual ~theta_and_psi_mcs();
    virtual void frame_advance(time_value_t time_inc);

private:
    rational_t theta;
    rational_t psi;
    rational_t d_theta_for_next_frame;
    rational_t d_psi_for_next_frame;
};

class dolly_and_strafe_mcs : public motion_control_system {
public:
    explicit dolly_and_strafe_mcs(entity *owner);
    virtual ~dolly_and_strafe_mcs();
    virtual void frame_advance(time_value_t time_inc);

private:
    rational_t dolly;
    rational_t strafe;
    rational_t lift;
    void do_dolly(rational_t distance);
    void do_lift(rational_t distance);
    void do_strafe(rational_t distance);
};

#endif
