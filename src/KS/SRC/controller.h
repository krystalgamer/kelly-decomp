#ifndef CONTROLLER_H
#define CONTROLLER_H

#pragma interface

typedef float time_value_t;

class dolly_and_strafe_mcs;
class entity;
class player_controller;
class theta_and_psi_mcs;

class controller {
protected:
    void copy_instance_data(const controller &other) {
        active = other.active;
        deactivate = other.deactivate;
    }

    bool active;
    bool deactivate;

public:
    controller() : active(true), deactivate(false) {}
    virtual ~controller();

    virtual void frame_advance(time_value_t time_inc) = 0;
    virtual void kill();
    virtual void resurrect();
    virtual void set_combat_mode(bool enabled);
    virtual bool get_combat_mode() const;
    virtual bool is_controller() const;
    virtual bool is_mouselook_controller() const;
    virtual bool is_entity_controller() const;
    virtual bool is_character_controller() const;
    virtual bool is_player_controller() const;
    virtual bool is_joystick_usercam_controller() const;
};

class mouselook_controller : public controller {
    dolly_and_strafe_mcs *move_cs;
    theta_and_psi_mcs *angle_mcs;

public:
    mouselook_controller(
        dolly_and_strafe_mcs *move,
        theta_and_psi_mcs *angle);
    virtual ~mouselook_controller();
    virtual void frame_advance(time_value_t time_inc);
    virtual bool is_mouselook_controller() const;
};

class joypad_usercam_controller : public controller {
    dolly_and_strafe_mcs *move_cs;
    theta_and_psi_mcs *angle_mcs;

public:
    joypad_usercam_controller(
        dolly_and_strafe_mcs *move,
        theta_and_psi_mcs *angle);
    virtual ~joypad_usercam_controller();
    virtual void frame_advance(time_value_t time_inc);
    virtual bool is_joystick_usercam_controller() const;
};

class entity_controller : public controller {
public:
    enum eControllerState {
        INVALID = -1,
        NONE,
        WALKING,
        RUNNING,
        STANDING,
        TURNING,
        ATTACKING,
        USING_ITEM,
        DRAW_ITEM,
        HOLSTER_ITEM,
        FRANTIC,
        SCARED,
        WOUNDED,
        DYING,
        JUMPING_FORWARD,
        CRAWLING,
        ROLLING,
        MAX_STATES
    };

protected:
    void copy_instance_data(const entity_controller &other);

    entity *owner;
    eControllerState state;

public:
    entity_controller(entity *owner);
    virtual ~entity_controller();
    virtual void frame_advance(time_value_t time_inc);
    virtual eControllerState get_state() const;
    virtual bool is_entity_controller() const;
    virtual void set_blocking(bool blocking);
    virtual bool is_blocking() const;
    virtual bool is_in_cautious_mode() const;
    virtual bool is_in_running_mode() const;
    virtual bool is_moving() const;
};

#endif
