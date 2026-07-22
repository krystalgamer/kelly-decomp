#ifndef KELLY_DECOMP_MCS_SHARED_H
#define KELLY_DECOMP_MCS_SHARED_H

class motion_control_system {
    char fields[0x10];
};

class dolly_and_strafe_mcs : public motion_control_system {
public:
    void frame_advance(float time_increment);

private:
    float dolly;
    float strafe;
    float lift;
    void do_dolly(float distance);
    void do_lift(float distance);
    void do_strafe(float distance);
};

#endif
