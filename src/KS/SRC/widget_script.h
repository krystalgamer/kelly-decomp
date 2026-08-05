#ifndef WIDGET_SCRIPT_H
#define WIDGET_SCRIPT_H

#pragma interface

#include "KS/SRC/widget.h"
#include "g++-2/stl_vector.h"

enum clue_col_e {
    CLUE_Default,
    CLUE_Red,
    CLUE_Green,
    CLUE_Blue,
    CLUE_Total
};

class clue_widget : public widget {
public:
    clue_widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y);
    virtual ~clue_widget();
    void set_clue_col(int panel, clue_col_e color);
    void clear_clues();
    const clue_col_e &get_clue_col(int panel) {
        return clue_col[panel];
    }
    void set_show_while_letterboxed(bool show) {
        show_while_letterboxed = show;
    }
    bool get_show_while_letterboxed() const {
        return show_while_letterboxed;
    }

protected:
    bool show_while_letterboxed;
    bitmap_widget *clue_bar;
    bitmap_widget *clue[3];
    clue_col_e clue_col[3];
};

class timer_widget : public widget {
public:
    class timer_func {
    public:
        time_value_t time;
        stringx function;
    };

    timer_widget(
        const char *widget_name,
        widget *parent,
        short x,
        short y);
    virtual ~timer_widget();
    virtual void show();
    virtual void frame_advance(time_value_t time_inc);
    virtual void update_scale();
    virtual void render();
    virtual void set_layer(rhw_layer_e layer);
    void set_time_left(rational_t time);
    rational_t get_time_left() const { return time_left; }
    void freeze() { running = false; }
    void run() { running = true; }
    void inc_time_left(rational_t delta);

protected:
    void resize_timer();
    bitmap_widget *digits[10];
    bitmap_widget *colon1;
    bitmap_widget *colon2;
    bitmap_widget *point;
    bitmap_widget *bg;
    int minutes;
    int seconds1;
    int seconds2;
    int tenths;
    rational_t time_left;
    bool running;
    bool updated;
    vector<timer_func> script_calls_left;
    vector<timer_func> script_calls_made;
};

class script_widget_holder_t : public widget {
public:
    script_widget_holder_t(
        const char *widget_name,
        widget *parent,
        short x,
        short y);
    virtual ~script_widget_holder_t();
    void frame_advance(time_value_t time_inc);
    void freeze() { running = false; }
    void run() { running = true; }
    timer_widget *get_timer_widget() const {
        return my_timer_widget;
    }

protected:
    timer_widget *my_timer_widget;
    bool running;
};

#endif

// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF730)
// 0x002FF730 __tf11clue_widget
#include "KS/SRC/rtti.h"
extern "C" void **ClueWidgetBaseRtti() __asm__("__tf6widget");
extern "C" void *clue_widget_type[] __asm__("__ti11clue_widget");
extern "C" const char clue_widget_name[];
extern "C" void *clue_widget_base_type[] __asm__("__ti6widget");
__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti11clue_widget, 0x005A3F90");
__asm__(".equ clue_widget_name, 0x004F4BF0");
__asm__(".equ __ti6widget, 0x00512148");
extern "C" void **ClueWidgetRtti() __asm__("__tf11clue_widget");
void **ClueWidgetRtti()
{
    if (!clue_widget_type[0]) {
        ClueWidgetBaseRtti();
        __rtti_si(clue_widget_type, clue_widget_name, clue_widget_base_type);
    }
    return clue_widget_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF7A8)
// 0x002FF7A8 __tf12timer_widget
#include "KS/SRC/rtti.h"
extern "C" void **TimerWidgetBaseRtti() __asm__("__tf6widget");
extern "C" void *timer_widget_type[] __asm__("__ti12timer_widget");
extern "C" const char timer_widget_name[];
extern "C" void *timer_widget_base_type[] __asm__("__ti6widget");
__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti12timer_widget, 0x005A3FA0");
__asm__(".equ timer_widget_name, 0x004F4C00");
__asm__(".equ __ti6widget, 0x00512148");
extern "C" void **TimerWidgetRtti() __asm__("__tf12timer_widget");
void **TimerWidgetRtti()
{
    if (!timer_widget_type[0]) {
        TimerWidgetBaseRtti();
        __rtti_si(timer_widget_type, timer_widget_name, timer_widget_base_type);
    }
    return timer_widget_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF800)
// 0x002FF800 __tf22script_widget_holder_t
#include "KS/SRC/rtti.h"
extern "C" void **ScriptWidgetHolderBaseRtti() __asm__("__tf6widget");
extern "C" void *script_widget_holder_type[] __asm__("__ti22script_widget_holder_t");
extern "C" const char script_widget_holder_name[];
extern "C" void *script_widget_holder_base_type[] __asm__("__ti6widget");
__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti22script_widget_holder_t, 0x005A3FB0");
__asm__(".equ script_widget_holder_name, 0x004F4C10");
__asm__(".equ __ti6widget, 0x00512148");
extern "C" void **ScriptWidgetHolderRtti() __asm__("__tf22script_widget_holder_t");
void **ScriptWidgetHolderRtti()
{
    if (!script_widget_holder_type[0]) {
        ScriptWidgetHolderBaseRtti();
        __rtti_si(
            script_widget_holder_type,
            script_widget_holder_name,
            script_widget_holder_base_type
        );
    }
    return script_widget_holder_type;
}
#endif
