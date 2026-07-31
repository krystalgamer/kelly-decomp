#ifndef KELLY_DECOMP_WIDGET_ROT_SHARED_H
#define KELLY_DECOMP_WIDGET_ROT_SHARED_H

#include "g++-2/stl_list.h"

typedef float time_value_t;
typedef float rational_t;
typedef unsigned int message_id_t;

struct color {
    float values[4];
};

class widget {
    char widget_name[8];
    int type;
    widget *parent;
    list<widget *, my_allocator<widget *> > children;
    unsigned int flags;
    list<void *, my_allocator<void *> > wevent_run_list;
    bool linear_animation;
    bool use_proj_matrix;
    int next_state;
    float state_wait_time;
    short x;
    short y;
    short abs_x;
    short abs_y;
    short base_x;
    short base_y;
    short orig_x;
    short orig_y;
    float angle;
    float abs_angle;
    float base_angle;
    float rotation[2][2];
    char built_fields[0x140 - 0x58];

public:
    enum {
        WFLAG_Ignore_Parent = 0x4
    };

    virtual ~widget();
    virtual void show();
    virtual void hide();
    virtual void ignore_parent();
    virtual void obey_parent();
    virtual void ignore_parent_showing();
    virtual void obey_parent_showing();
    virtual void frame_advance(time_value_t);
    virtual void render();
    virtual void message_handler(
        message_id_t, message_id_t, rational_t, rational_t);
    virtual void add_child(widget *);
    virtual void flush();
    virtual void move_to(short, short);
    virtual void move_to(time_value_t, time_value_t, short, short);
    virtual void scale_to(rational_t, rational_t);
    virtual void scale_to(
        time_value_t, time_value_t, rational_t, rational_t);
    virtual void scale_to(rational_t);
    virtual void scale_to(time_value_t, time_value_t, rational_t);
    virtual void rotate_to(rational_t);
    virtual void rotate_to(time_value_t, time_value_t, rational_t);
    virtual void set_color(color);
    virtual void set_color(color *);
    virtual void set_color(time_value_t, time_value_t, color);
    virtual void set_color(rational_t, rational_t, rational_t);
    virtual void fade_to(rational_t);
    virtual void fade_to(time_value_t, time_value_t, rational_t);
    virtual void set_subrect(int, int, int, int);
    virtual void set_origin(short, short);
    virtual void transform(rational_t *, color &, int);
    virtual rational_t get_width();
    virtual rational_t get_height();
    virtual void set_layer(int);
    virtual void update_pos();
    virtual void update_scale();
    virtual void update_rot();
    virtual void update_col();

    inline bool ignoring_parent() const {
        return flags & WFLAG_Ignore_Parent;
    }
    inline float get_abs_angle() const {
        return abs_angle;
    }
};

extern "C" void fast_sin_cos_approx(
    float angle,
    float *sine,
    float *cosine)
    __asm__("fast_sin_cos_approx__FfPfT1");
__asm__(".equ fast_sin_cos_approx__FfPfT1, 0x001E2EC8");

#endif
