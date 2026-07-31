#ifndef KELLYSLATER_AI_GOALS_H
#define KELLYSLATER_AI_GOALS_H

#pragma interface

#include "KS/SRC/ai_goals.h"
#include "KS/SRC/algebra.h"

class kellyslater_controller;

class surfer_ai_goal : public ai_goal {
protected:
    friend class ai_interface;

    virtual rational_t frame_advance(time_value_t time);
    virtual ai_goal *make_copy(ai_interface *owner);

    kellyslater_controller *kellyslater_controller_ptr;
    vector3d exploded_pos;
    bool exploded;

public:
    explicit surfer_ai_goal(ai_interface *owner);
    virtual ~surfer_ai_goal();
    void setup(int pad = 0);
    inline kellyslater_controller *
    get_kellyslater_controller_ptr() {
        return kellyslater_controller_ptr;
    }
    virtual rational_t calculate_priority(time_value_t time);
    virtual void going_into_service();
    virtual void going_out_of_service();
};

#endif
