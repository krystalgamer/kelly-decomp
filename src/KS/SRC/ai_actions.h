#ifndef AI_ACTIONS_H
#define AI_ACTIONS_H

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/stringx.h"

typedef float rational_t;
typedef float time_value_t;

class ai_goal;
class ai_interface;
class entity;

class ai_action {
public:
    enum {
        IN_SERVICE = 0x00000001
    };

    explicit ai_action(ai_goal *owner);
    virtual ~ai_action();
    virtual bool frame_advance(time_value_t time) = 0;
    virtual void going_out_of_service();
    virtual void going_into_service();

    inline bool is_flagged(int flag) const {
        return (flags & flag) != 0;
    }
    inline void set_flag(int flag, bool enabled = true) {
        if (enabled)
            flags |= flag;
        else
            flags &= ~flag;
    }
    inline bool is_in_service() const {
        return is_flagged(IN_SERVICE);
    }
    inline ai_goal *get_ai_goal() const {
        return owner;
    }
    ai_interface *get_ai_interface() const;
    entity *get_my_entity() const;
    inline unsigned int get_id() const {
        return id;
    }

protected:
    ai_goal *owner;
    int flags;
    unsigned int id;

private:
    static unsigned int action_id_counter;
};

class anim_ai_action : public ai_action {
public:
    explicit anim_ai_action(ai_goal *owner);
    virtual ~anim_ai_action();
    virtual bool frame_advance(time_value_t time);
    virtual void going_out_of_service();
    virtual void going_into_service();

protected:
    stringx anim_to_find;
    stringx sound_grp;
    int anim_slot;
    bool looping;
    bool reverse;
    bool non_cosmetic;
    bool tween;
    int anim_damage_value;
    rational_t anim_recover;
    rational_t anim_recover_var;
    int anim_flags;
    vector3d safe_pos;
    bool safety_checks;
};

#endif
