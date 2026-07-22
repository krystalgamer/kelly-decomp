#ifndef KELLY_DECOMP_SCRIPT_LIB_WIDGET_SHARED_H
#define KELLY_DECOMP_SCRIPT_LIB_WIDGET_SHARED_H

#include "KS/SRC/script_library_class_shared.h"

typedef float rational_t;
typedef float time_value_t;

class widget {
    char widget_state[0x140];

public:
    virtual void widget_slot_00();
    virtual void widget_slot_01();
    virtual void widget_slot_02();
    virtual void widget_slot_03();
    virtual void widget_slot_04();
    virtual void widget_slot_05();
    virtual void widget_slot_06();
    virtual void widget_slot_07();
    virtual void widget_slot_08();
    virtual void widget_slot_09();
    virtual void widget_slot_10();
    virtual void widget_slot_11();
    virtual void widget_slot_12();
    virtual void widget_slot_13();
    virtual void widget_slot_14();
    virtual void widget_slot_15();
    virtual void widget_slot_16();
    virtual void widget_slot_17();
    virtual void widget_slot_18();
    virtual void widget_slot_19();
    virtual void widget_slot_20();
    virtual void widget_slot_21();
    virtual void widget_slot_22();
    virtual void set_color(
        rational_t red,
        rational_t green,
        rational_t blue);
    virtual void fade_to(rational_t alpha);
    virtual void fade_to(
        time_value_t wait,
        time_value_t duration,
        rational_t alpha);
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
