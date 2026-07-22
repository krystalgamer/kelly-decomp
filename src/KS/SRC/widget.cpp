// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_0033F448)
// 0x0033F448 show__11menu_widget
#include "KS/SRC/widget_shared.h"
__asm__(".equ show__6widget, 0x0033DDD0");
void menu_widget::show()
{
    if (!is_shown())
    {
        init();
        widget::show();
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_0033F370)
// 0x0033F370 get_width__16menu_item_widget
class menu_item_widget { public: float get_width(); };
float menu_item_widget::get_width() { return 100.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033F380)
// 0x0033F380 get_height__16menu_item_widget
class menu_item_widget { public: float get_height(); };
float menu_item_widget::get_height() { return 100.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033F848)
// 0x0033F848 get_width__11menu_widget
class menu_widget { public: float get_width(); };
float menu_widget::get_width() { return 100.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033F858)
// 0x0033F858 get_height__11menu_widget
class menu_widget { public: float get_height(); };
float menu_widget::get_height() { return 100.0f; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003406E8)
// 0x003406E8 frame_advance__11text_widgetf
class widget { public: void frame_advance(float time); };
__asm__(".equ frame_advance__6widgetf, 0x0033DF70");
class text_widget : public widget { public: void frame_advance(float time); };
void text_widget::frame_advance(float time) { widget::frame_advance(time); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003407F0)
// 0x003407F0 flush__11text_widget
class widget { public: void flush(); };
__asm__(".equ flush__6widget, 0x0033E518");
class text_widget : public widget { public: void flush(); };
void text_widget::flush() { widget::flush(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033EAD8)
// 0x0033EAD8 get_first_child__6widget
class widget;
struct widget_node { widget_node *next; widget_node *previous; widget *value; };
class widget_iterator { widget_node *node; public: widget_iterator(widget_node *value) : node(value) {} };
class widget { char padding[0x10]; widget_node *children; public: widget *get_first_child(); };
widget *widget::get_first_child() { widget_node *sentinel = children; widget_node *first = sentinel->next; if (first != sentinel) { volatile widget_iterator iterator(first); return first->value; } return 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033EDE8)
// 0x0033EDE8 rotate_to__6widgetf
struct widget_vtable {
    char padding[0x118];
    short adjustment;
    short padding2;
    void (*update_rot)(void *self);
};

class widget {
    char padding0[0x3c];
    float angle;
    char padding1[0x100];
    widget_vtable *vtable;

public:
    void rotate_to(float value);
};

void widget::rotate_to(float value) {
    angle = value;
    widget_vtable *table = vtable;
    table->update_rot((char *)this + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003419B0)
// 0x003419B0 update_pos__11vrep_widget
class widget {
public:
    void update_pos();
};

__asm__(".equ update_pos__6widget, 0x0033E650");

class vrep_widget : public widget {
public:
    void update_pos();
    void update_mat();
};

__asm__(".equ update_mat__11vrep_widget, 0x00341E60");

void vrep_widget::update_pos() {
    widget::update_pos();
    update_mat();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003419E0)
// 0x003419E0 update_scale__11vrep_widget
class widget {
public:
    void update_scale();
};

__asm__(".equ update_scale__6widget, 0x0033E710");

class vrep_widget : public widget {
public:
    void update_scale();
    void update_mat();
};

__asm__(".equ update_mat__11vrep_widget, 0x00341E60");

void vrep_widget::update_scale() {
    widget::update_scale();
    update_mat();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033ED18)
// 0x0033ED18 scale_to__6widgetff
struct widget_vtable {
    char padding[0x110];
    short adjustment;
    short padding2;
    void (*update_scale)(void *self);
};

class widget {
    char padding0[0x118];
    float horizontal_scale;
    float vertical_scale;
    char padding1[0x20];
    widget_vtable *vtable;

public:
    void scale_to(float horizontal, float vertical);
};

void widget::scale_to(float horizontal, float vertical) {
    horizontal_scale = horizontal;
    vertical_scale = vertical;
    widget_vtable *table = vtable;
    table->update_scale((char *)this + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033F298)
// 0x0033F298 get_next_rhw_2d_val__6widget
typedef float rational_t;

class widget {
public:
    enum rhw_layer_e {
        RHW0,
        RHW1,
        RHW2,
        RHW3,
        RHW4,
        RHW5,
        RHW6,
        RHW7,
        RHW8,
        RHW9,
        RHW_OVER_PFE1,
        RHW_OVER_PFE2,
        NUM_RHW_LAYERS
    };

    static rhw_layer_e rhw_2d_layer;
    static rational_t rhw_2d_val[NUM_RHW_LAYERS];
    static rational_t get_next_rhw_2d_val();
};

__asm__(".equ _6widget$rhw_2d_layer, 0x0046B730");
__asm__(".equ _6widget$rhw_2d_val, 0x005A3EB0");

rational_t widget::get_next_rhw_2d_val()
{
    rational_t retval = rhw_2d_val[rhw_2d_layer];
    rhw_2d_val[rhw_2d_layer] += 1.0f;
    return retval;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00340510)
// 0x00340510 get_width__C11text_widget
typedef float rational_t;

class stringx {};

class typeface_def {
public:
    int text_width(const stringx &s) const;
};

__asm__(".equ text_width__C12typeface_defRC7stringx, 0x0033CBC8");

class text_widget {
    char padding[0x144];
    typeface_def *text_font;
    stringx m_tout;

public:
    rational_t get_width() const;
};

rational_t text_widget::get_width() const
{
    int width = text_font->text_width(m_tout);
    rational_t result;
    __asm__ volatile(
        "mtc1 %1,%0\n\t"
        "nop\n\t"
        "cvt.s.w %0,%0"
        : "=f"(result)
        : "r"(width)
    );
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00340540)
// 0x00340540 get_height__C11text_widget
typedef float rational_t;

class stringx {};

class typeface_def {
public:
    int text_height(const stringx &s) const;
};

__asm__(".equ text_height__C12typeface_defRC7stringx, 0x0033CD88");

class text_widget {
    char padding[0x144];
    typeface_def *text_font;
    stringx m_tout;

public:
    rational_t get_height() const;
};

rational_t text_widget::get_height() const
{
    int height = text_font->text_height(m_tout);
    rational_t result;
    __asm__ volatile(
        "mtc1 %1,%0\n\t"
        "nop\n\t"
        "cvt.s.w %0,%0"
        : "=f"(result)
        : "r"(height)
    );
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00340810)
// 0x00340810 set_rhw__11text_widgetf
class widget {
    char padding[0x158];

public:
    enum rhw_layer_e {
        RHW0,
        RHW1,
        RHW2,
        RHW3,
        RHW4,
        RHW5,
        RHW6,
        RHW7,
        RHW8,
        RHW9,
        RHW_OVER_PFE1,
        RHW_OVER_PFE2,
        NUM_RHW_LAYERS
    };

    static rhw_layer_e rhw_2d_layer;
    static float rhw_2d_val[NUM_RHW_LAYERS];
};

__asm__(".equ _6widget$rhw_2d_layer, 0x0046B730");
__asm__(".equ _6widget$rhw_2d_val, 0x005A3EB0");

class text_widget : public widget {
    float rhw;

public:
    void set_rhw(float value);
};

void text_widget::set_rhw(float value)
{
    rhw = value;
    widget::rhw_2d_val[rhw_2d_layer] -= 1.0f;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00341978)
// 0x00341978 set_rotation__11vrep_widgetfff
struct widget_vtable {
    char padding[0x118];
    short adjustment;
    short padding2;
    void (*update_rot)(void *self);
};

class vrep_widget {
    char padding0[0x140];
    widget_vtable *vtable;
    char padding1[0x14];
    float ax;
    float ay;
    float az;

public:
    void set_rotation(float x, float y, float z);
};

void vrep_widget::set_rotation(float x, float y, float z)
{
    ax = x;
    ay = y;
    az = z;
    widget_vtable *table = vtable;
    table->update_rot((char *)this + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00341788)
// 0x00341788 show__11vrep_widget
extern "C" void WidgetShow(void *self) __asm__("show__6widget");
__asm__(".equ show__6widget, 0x0033DDD0");
struct vrep_widget_vtable {
    char padding[0x118];
    short adjustment;
    short padding2;
    void (*update_rot)(void *self);
};
class vrep_widget {
    char padding[0x140];
    vrep_widget_vtable *vtable;
public:
    void show();
};
void vrep_widget::show()
{
    WidgetShow(this);
    vrep_widget_vtable *table = vtable;
    table->update_rot((char *)this + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033D898)
// 0x0033D898 do_wevent__13rotate_weventf
struct virtual_entry { short adjustment; short padding; void (*function)(void *, float); };
class widget {
    char padding0[0x3C];
    float angle;
    char padding1[0x100];
    virtual_entry *table;
    friend class rotate_wevent;
};
class rotate_wevent {
    char padding0[4];
    widget *owner;
    char padding1[0x10];
    float angle;
public:
    void do_wevent(float lerp);
};
void rotate_wevent::do_wevent(float lerp)
{
    float current = owner->angle;
    virtual_entry *call = (virtual_entry *)((char *)owner->table + 0x98);
    call->function((char *)owner + call->adjustment,
                   current + (angle - current) * lerp);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033F038)
// 0x0033F038 set_color__6widgetfff
struct color {
    float r, g, b, a;
    color(float red, float green, float blue, float alpha)
        : r(red), g(green), b(blue), a(alpha) {}
};
struct virtual_entry { short adjustment; short padding; void (*function)(void *, const color &); };
class widget {
    char padding0[0x64];
    float alpha;
    char padding1[0xD8];
    virtual_entry *table;
public:
    void set_color(float r, float g, float b);
};
void widget::set_color(float r, float g, float b)
{
    color value(r, g, b, alpha);
    virtual_entry *call = (virtual_entry *)((char *)table + 0xA8);
    call->function((char *)this + call->adjustment, value);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00342DD0)
// 0x00342DD0 resize__9fluid_barff
class bitmap_widget { public: void resize(float width, float height); };
__asm__(".equ resize__13bitmap_widgetff, 0x0033FBE0");
class fluid_bar {
    char padding0[0x154];
    bitmap_widget *bar_map;
    char padding1[8];
    float w;
    float h;
    char padding2[0x2C];
    bool update;
public:
    void resize(float width, float height);
};
void fluid_bar::resize(float width, float height)
{
    w = width;
    h = height;
    if (bar_map) {
        bar_map->resize(w, h);
        update = true;
    }
}
#endif
