#ifndef ELEMENT_H
#define ELEMENT_H

#pragma interface

#include "KS/SRC/algebra.h"
#include "KS/SRC/color.h"
#include "KS/SRC/rect.h"
#include "KS/SRC/singleton.h"
#include "KS/SRC/stringx.h"
#include "g++-2/stl_list.h"

typedef float time_value_t;

enum element_type_e {
    ELEMENT_Container,
    ELEMENT_Text
};

enum event_type_e {
    EVENT_None,
    EVENT_Color,
    EVENT_Move,
    EVENT_Rotate,
    EVENT_Scale
};

class element;
class event;

typedef list<element *> element_list_t;
typedef list<event *> event_list_t;

class element_manager : public singleton {
public:
    stringx interface_font_name;

    element_manager();
    virtual ~element_manager();
    void purge();
    void create_default_elements();
    void restore_default_elements();
    inline void enable() { enabled = true; }
    inline void disable() { enabled = false; }
    void push_context(const stringx &name);
    void pop_context();
    void frame_advance(time_value_t time);
    void render();

    matrix4x4 projection_matrix;

protected:
    class context : public element_list_t {
    public:
        explicit context(const stringx &value)
          : name(value)
        {
        }
        inline const stringx &get_name() const {
            return name;
        }

    protected:
        stringx name;
    };

    list<context *> context_stack;
    int next_id;
    bool enabled;
};

class event {
public:
    event(
        event_type_e type_value,
        element *owner_value,
        time_value_t wait,
        time_value_t event_duration)
      : type(type_value),
        owner(owner_value),
        wait_time(wait),
        duration(event_duration),
        elapsed(0.0f)
    {
    }
    virtual void do_event(const float &lerp) = 0;

protected:
    event_type_e type;
    element *owner;
    time_value_t wait_time;
    time_value_t duration;
    time_value_t elapsed;
};

class move_event : public event {
public:
    move_event(
        element *owner,
        time_value_t wait,
        time_value_t duration,
        int x_value,
        int y_value)
      : event(EVENT_Move, owner, wait, duration),
        x((float)x_value),
        y((float)y_value)
    {
    }
    virtual void do_event(const float &lerp);

protected:
    float x;
    float y;
};

class color_event : public event {
public:
    color_event(
        element *owner,
        time_value_t wait,
        time_value_t duration,
        color value)
      : event(EVENT_Color, owner, wait, duration),
        mycolor(value)
    {
    }
    virtual void do_event(const float &lerp);

protected:
    color mycolor;
};

class rotate_event : public event {
public:
    rotate_event(
        element *owner,
        time_value_t wait,
        time_value_t duration,
        float value)
      : event(EVENT_Rotate, owner, wait, duration),
        angle(value)
    {
    }
    virtual void do_event(const float &lerp);

protected:
    float angle;
};

class scale_event : public event {
public:
    scale_event(
        element *owner,
        time_value_t wait,
        time_value_t duration,
        float x_value,
        float y_value)
      : event(EVENT_Scale, owner, wait, duration),
        sx(x_value),
        sy(y_value)
    {
    }
    virtual void do_event(const float &lerp);

protected:
    float sx;
    float sy;
};

class element {
public:
    element(element *parent);
    virtual ~element();
    virtual void rotate_to(
        time_value_t wait,
        time_value_t duration,
        float angle);
    virtual void set_subrect(int x0, int y0, int x1, int y1);
    virtual void transform(float value[2], color &result, int index);
    virtual void render() = 0;
    void add_event(event *value);

    friend class event;
    friend class move_event;
    friend class color_event;
    friend class rotate_event;
    friend class scale_event;

protected:
    element *parent;
    element_type_e type;
    unsigned int flags;
    element_list_t subelements;
    rectf subrect;
    float R[2][2];
    float T[2];
    float S[2];
    float S_Override[2];
    float O[2];
    float angle;
    color mycolor[4];
    event_list_t event_run_list;
    bool linear_animation;
};

#endif
