// Matching decompilation blocks selected by generated build shims.


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
