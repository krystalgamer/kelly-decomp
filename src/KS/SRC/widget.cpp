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
