#ifndef KELLY_DECOMP_WIDGET_SHARED_H
#define KELLY_DECOMP_WIDGET_SHARED_H

typedef float rational_t;
typedef float time_value_t;

class widget;

enum wevent_type_e {
    WEVENT_None,
    WEVENT_Color,
    WEVENT_Move,
    WEVENT_Rotate,
    WEVENT_Scale
};

class wevent {
public:
    time_value_t active_time_elapsed();

protected:
    wevent_type_e type;
    widget *owner;
    time_value_t wait_time;
    time_value_t duration;
    time_value_t elapsed;

public:
    virtual void do_wevent(rational_t lerp) = 0;
};

#endif
