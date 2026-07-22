#ifndef KELLY_DECOMP_SCRIPT_LIB_WIDGET_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIB_WIDGET_SHARED_H

#include "KS/SRC/script_library_class_shared.h"

typedef float rational_t;
typedef float time_value_t;

class widget {
    char widget_state[0x140];

public:
    virtual ~widget();
    virtual void show();
    virtual void hide();
    virtual void ignore_parent();
    virtual void obey_parent();
    virtual void ignore_parent_showing();
    virtual void obey_parent_showing();
    virtual void frame_advance(time_value_t time_inc);
    virtual void render();
    virtual void message_handler(
        unsigned int message,
        unsigned int overflow = 0,
        rational_t parm0 = 0,
        rational_t parm1 = 0);
    virtual void add_child(widget *child);
    virtual void flush();
    virtual void move_to(short x, short y);
    virtual void move_to(
        time_value_t wait,
        time_value_t duration,
        short x,
        short y);
    virtual void scale_to(rational_t horizontal, rational_t vertical);
    virtual void scale_to(
        time_value_t wait,
        time_value_t duration,
        rational_t horizontal,
        rational_t vertical);
};

class slf_widget_scale_to2_t : public script_library_class::function {
public:
    struct parms_t {
        widget *me;
        vm_num_t wt;
        vm_num_t dur;
        vm_num_t val;
    };

    bool operator()(vm_stack &stack, entry_t entry);
};

class bitmap_widget : public widget {
};

class fluid_bar : public widget {
};

class vector3d {
public:
    rational_t x;
    rational_t y;
    rational_t z;
};

#endif
