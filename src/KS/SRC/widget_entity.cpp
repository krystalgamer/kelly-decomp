// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002BA5B0)
// 0x002BA5B0 update_pos__13entity_widget
class widget { public: void update_pos(); };
__asm__(".equ update_pos__6widget, 0x0033E650");
class entity_widget : public widget { public: void update_pos(); void update_entity_po(); };
__asm__(".equ update_entity_po__13entity_widget, 0x002BAA98");
void entity_widget::update_pos() { widget::update_pos(); update_entity_po(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BA5E0)
// 0x002BA5E0 update_scale__13entity_widget
class widget { public: void update_scale(); };
__asm__(".equ update_scale__6widget, 0x0033E710");
class entity_widget : public widget { public: void update_scale(); void update_entity_po(); };
__asm__(".equ update_entity_po__13entity_widget, 0x002BAA98");
void entity_widget::update_scale() { widget::update_scale(); update_entity_po(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002BAA60)
// 0x002BAA60 set_rotation__13entity_widgetfff
struct widget_vtable {
    char padding[0x118];
    short adjustment;
    short padding2;
    void (*update_rot)(void *self);
};

class entity_widget {
    char padding0[0x140];
    widget_vtable *vtable;
    char padding1[0x1C];
    float ax;
    float ay;
    float az;

public:
    void set_rotation(float x, float y, float z);
};

void entity_widget::set_rotation(float x, float y, float z)
{
    ax = x;
    ay = y;
    az = z;
    widget_vtable *table = vtable;
    table->update_rot((char *)this + table->adjustment);
}
#endif
