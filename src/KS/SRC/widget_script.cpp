// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002BC128)
// 0x002BC128 inc_time_left__12timer_widgetf
class timer_widget { char padding[0x18c]; float time_left; public: void set_time_left(float time); void inc_time_left(float amount); };
__asm__(".equ set_time_left__12timer_widgetf, 0x002BBE90");
void timer_widget::inc_time_left(float amount) { set_time_left(time_left + amount); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BC8C0)
// 0x002BC8C0 frame_advance__22script_widget_holder_tf
class widget { public: void frame_advance(float time_inc); };
__asm__(".equ frame_advance__6widgetf, 0x0033DF70");
class script_widget_holder_t : public widget { char padding[0x144]; int running; public: void frame_advance(float time_inc); };
void script_widget_holder_t::frame_advance(float time_inc) { if (running) { widget::frame_advance(time_inc); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BB7E8)
// 0x002BB7E8 update_scale__12timer_widget
class widget { public: void update_scale(); };
__asm__(".equ update_scale__6widget, 0x0033E710");
class timer_widget : public widget { public: void update_scale(); void resize_timer(); };
__asm__(".equ resize_timer__12timer_widget, 0x002BB818");
void timer_widget::update_scale() { widget::update_scale(); resize_timer(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BBA38)
// 0x002BBA38 show__12timer_widget
extern "C" void WidgetShow(void *self)
    __asm__("show__6widget");
__asm__(".equ show__6widget, 0x0033DDD0");

class timer_widget {
    char padding0[0x14];
    int flags;
    char padding1[0x178];
    bool running;
    bool updated;

public:
    void show();
};

void timer_widget::show()
{
    if (flags & 1)
        return;

    running = true;
    updated = false;
    WidgetShow(this);
    KELLY_DECOMP_COMPILER_BARRIER();
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
