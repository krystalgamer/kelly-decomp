// Matching decompilation blocks selected by generated build shims.


// 0x002BC8C0 frame_advance__22script_widget_holder_tf
#include "KS/SRC/widget_script.h"

void frame_widget(widget *value, time_value_t time_inc)
    __asm__("frame_advance__6widgetf");
__asm__(".equ frame_advance__6widgetf, 0x0033DF70");

void script_widget_holder_t::frame_advance(time_value_t time_inc)
{
    if (running) {
        void (*advance)(widget *, time_value_t) = frame_widget;
        advance(this, time_inc);
    }
}

// 0x002BB7E8 update_scale__12timer_widget
#include "KS/SRC/widget_script.h"

__asm__(".equ update_scale__6widget, 0x0033E710");
__asm__(".equ resize_timer__12timer_widget, 0x002BB818");
void resize_timer_widget(timer_widget *self)
    __asm__("resize_timer__12timer_widget");
void timer_widget::update_scale() {
    widget::update_scale();
    void (*resize)(timer_widget *) = resize_timer_widget;
    resize(this);
}

#if defined(KELLY_DECOMP_FUNCTION_002BBA38)
// 0x002BBA38 show__12timer_widget
#include "KS/SRC/widget_script.h"

extern "C" void show_widget(widget *self)
    __asm__("show__6widget");
__asm__(".equ show__6widget, 0x0033DDD0");

void timer_widget::show()
{
    if (flags & 1)
        return;

    running = true;
    updated = false;
    void (*show_base)(widget *) = show_widget;
    show_base(this);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BB790)
// 0x002BB790 set_bg_color__12timer_widgetG5color
typedef float time_value_t;
typedef float rational_t;

struct color
{
    float r;
    float g;
    float b;
    float a;

    color() {}
    color(const color &other)
        : r(other.r), g(other.g), b(other.b), a(other.a)
    {
    }
};

class widget
{
    char padding[0x140];

public:
    virtual ~widget();
    virtual void show();
    virtual void hide();
    virtual void ignore_parent();
    virtual void obey_parent();
    virtual void ignore_parent_showing();
    virtual void obey_parent_showing();
    virtual void frame_advance(time_value_t time);
    virtual void render();
    virtual void message_handler(int message, int overflow,
                                 rational_t first, rational_t second);
    virtual void add_child(widget *child);
    virtual void flush();
    virtual void move_to(short x, short y);
    virtual void move_to(time_value_t wait, time_value_t duration,
                         short x, short y);
    virtual void scale_to(rational_t horizontal, rational_t vertical);
    virtual void scale_to(time_value_t wait, time_value_t duration,
                          rational_t horizontal, rational_t vertical);
    virtual void scale_to(rational_t scale);
    virtual void scale_to(time_value_t wait, time_value_t duration,
                          rational_t scale);
    virtual void rotate_to(rational_t angle);
    virtual void rotate_to(time_value_t wait, time_value_t duration,
                           rational_t angle);
    virtual void set_color(color value);
};

class bitmap_widget : public widget
{
};

class timer_widget
{
    char padding[0x178];
    bitmap_widget *bg;

public:
    void set_bg_color(color value);
};

void timer_widget::set_bg_color(color value)
{
    bg->set_color(value);
}
#endif
