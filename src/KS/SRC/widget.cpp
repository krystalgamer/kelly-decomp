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

#if defined(KELLY_DECOMP_FUNCTION_0033F2C8)
// 0x0033F2C8 get_pc_z__6widgetf
typedef float rational_t;

const rational_t PROJ_NEAR_PLANE_D = 0.2f;

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
        NUM_RHW_LAYERS
    };

    static const rational_t rhw_layer_ranges[NUM_RHW_LAYERS][2];
    static rational_t get_pc_z(rational_t rhw);
};

__asm__(".equ _6widget$rhw_layer_ranges, 0x00501E10");

rational_t widget::get_pc_z(rational_t rhw)
{
    rational_t min_rhw = widget::rhw_layer_ranges[RHW0][0];
    rational_t max_rhw = widget::rhw_layer_ranges[RHW9][1];

    if (rhw > max_rhw)
        rhw = max_rhw;

    rational_t min_z = PROJ_NEAR_PLANE_D * 2;
    rational_t z_range = 0.999f - min_z;

    rational_t z =
        0.999f - (((rhw - min_rhw) / (max_rhw - min_rhw)) * z_range);
    return z;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033D8D8)
// 0x0033D8D8 do_wevent__12scale_weventf
struct widget_vtable
{
    char padding[0x78];
    short adjustment;
    short reserved;
    void (*scale_to)(void *self, float horizontal, float vertical);
};

struct widget_layout
{
    char padding0[0x118];
    float scale[2];
    char padding1[0x20];
    widget_vtable *vtable;
};

class scale_wevent
{
    int type;
    widget_layout *owner;
    char padding[0x10];
    float sx;
    float sy;

public:
    void do_wevent(float lerp);
};

void scale_wevent::do_wevent(float lerp)
{
    widget_vtable *table = owner->vtable;
    table->scale_to(
        (char *)owner + table->adjustment,
        owner->scale[0] + (sx - owner->scale[0]) * lerp,
        owner->scale[1] + (sy - owner->scale[1]) * lerp
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033FBE0)
// 0x0033FBE0 resize__13bitmap_widgetff
struct widget_vtable
{
    char padding[0x78];
    short adjustment;
    short reserved;
    void (*scale_to)(void *self, float horizontal, float vertical);
};

class bitmap_widget
{
    char padding0[0x14];
    unsigned int flags;
    char padding1[0x128];
    widget_vtable *vtable;
    float width;
    float height;

public:
    bool is_open() const { return flags & 2; }
    void resize(float new_width, float new_height);
};

void bitmap_widget::resize(float new_width, float new_height)
{
    if (!is_open())
        return;
    widget_vtable *table = vtable;
    table->scale_to(
        (char *)this + table->adjustment,
        new_width / width,
        new_height / height
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00341730)
// 0x00341730 _$_11vrep_widget
extern "C" void nglReleaseMeshFile(const void *name)
    __asm__("nglReleaseMeshFile__FRC14nglFixedString");
extern "C" void WidgetDtor(void *self, int deleting)
    __asm__("_$_6widget");
extern const char vrep_widget_vtable[];

__asm__(".equ nglReleaseMeshFile__FRC14nglFixedString, 0x003A1968");
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ vrep_widget_vtable, 0x00504678");

struct vrep_widget_layout
{
    char padding[0x140];
    const void *vtable;
    void *mesh;
};

extern "C" void VrepWidgetDtor(void *self, int deleting)
    __asm__("_$_11vrep_widget");

void VrepWidgetDtor(void *self, int deleting)
{
    vrep_widget_layout *widget = (vrep_widget_layout *)self;
    widget->vtable = vrep_widget_vtable;
    if (widget->mesh)
        nglReleaseMeshFile((char *)widget->mesh + 0x10);
    WidgetDtor(self, deleting);
    __asm__ __volatile__("" : : : "memory");
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033F318)
// 0x0033F318 select__16menu_item_widgetb
struct item_vtable {
    char padding[0x130]; short adjustment; short reserved;
    void (*deselect)(void *self, bool initial);
};
struct menu_item {
    char padding[0x140]; item_vtable *vtable;
    char padding2[0xc]; int selected;
};
struct menu_parent {
    char padding[8]; int type;
    char padding2[0x13c]; menu_item *selected_item;
};
struct menu_item_layout {
    char padding0[0xc]; menu_parent *parent;
    char padding1[0x140]; int selected;
};
class menu_item_widget {
public:
    void select(bool initial);
};
void menu_item_widget::select(bool initial) {
    menu_item_layout *item=(menu_item_layout *)this;
    item->selected=true;
    menu_parent *parent=item->parent;
    if (parent->type==5) {
        menu_item *old=parent->selected_item;
        parent->selected_item=(menu_item *)this;
        if (old && old!=(menu_item *)this) {
            item_vtable *table=old->vtable;
            table->deselect((char *)old+table->adjustment,initial);
        }
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0033EEA8)
// 0x0033EEA8 set_color__6widgetG5color
struct color { float r,g,b,a; };
struct update_vtable { char padding[288]; short adjustment; short reserved; void (*update)(void *); };
struct widget_layout { char padding[88]; color col[4]; char padding2[168]; update_vtable *vtable; };
extern "C" void set_widget_color(widget_layout *self, const color *value) __asm__("set_color__6widgetG5color");
void set_widget_color(widget_layout *self, const color *value)
{
    color *destination = self->col;
    for (int i=0;i<4;++i,++destination) {
        destination->r=value->r;
        destination->g=value->g;
        destination->b=value->b;
        destination->a=value->a;
    }
    update_vtable *table=self->vtable;
    table->update((char *)self + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00340570)
// 0x00340570 init__11text_widgetR7stringx
struct stringx;
struct typeface_def;
extern "C" void unload_typeface(typeface_def *) __asm__("unload__12typeface_def");
extern "C" void close_typeface(typeface_def *) __asm__("typeface_close__FP12typeface_def");
extern "C" typeface_def *open_typeface(stringx *) __asm__("typeface_open__FRC7stringx");
extern "C" void load_typeface(typeface_def *) __asm__("load__12typeface_def");
__asm__(".equ unload__12typeface_def,0x0033CAF0");
__asm__(".equ typeface_close__FP12typeface_def,0x0033D458");
__asm__(".equ typeface_open__FRC7stringx,0x0033D298");
__asm__(".equ load__12typeface_def,0x0033C6E8");
class text_widget { char padding[8]; int type; char padding2[312]; typeface_def *text_font; public: void init(stringx &typeface); };
void text_widget::init(stringx &typeface)
{
    if (text_font) {
        unload_typeface(text_font);
        close_typeface(text_font);
        text_font = 0;
    }
    type = 1;
    text_font = open_typeface(&typeface);
    load_typeface(text_font);
    __asm__ __volatile__("" : : : "memory");
}
#endif
