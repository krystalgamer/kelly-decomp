// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FEFD8)
// 0x002FEFD8 get_width__13entity_widget
struct entity_vtable {
    char padding[0xd8];
    short adjustment;
    short padding2;
    float (*get_radius)(void *self);
};

class entity {
    char padding[8];

public:
    entity_vtable *vtable;
};

class entity_widget {
    char padding[0x144];
    entity *ent;

public:
    float get_width();
};

float entity_widget::get_width() {
    entity_vtable *table = ent->vtable;
    return table->get_radius((char *)ent + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF008)
// 0x002FF008 get_height__13entity_widget
struct entity_vtable {
    char padding[0xd8];
    short adjustment;
    short padding2;
    float (*get_radius)(void *self);
};

class entity {
    char padding[8];

public:
    entity_vtable *vtable;
};

class entity_widget {
    char padding[0x144];
    entity *ent;

public:
    float get_height();
};

float entity_widget::get_height() {
    entity_vtable *table = ent->vtable;
    return table->get_radius((char *)ent + table->adjustment);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FEED8)
// 0x002FEED8 __tf13entity_widget
#include "KS/SRC/rtti_shared.h"
extern "C" void **EntityWidgetBaseRtti() __asm__("__tf6widget");
extern "C" void *entity_widget_type[] __asm__("__ti13entity_widget");
extern "C" const char entity_widget_name[];
extern "C" void *entity_widget_base_type[] __asm__("__ti6widget");
__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti13entity_widget, 0x005A3F10");
__asm__(".equ entity_widget_name, 0x004F4B20");
__asm__(".equ __ti6widget, 0x00512148");
extern "C" void **EntityWidgetRtti() __asm__("__tf13entity_widget");
void **EntityWidgetRtti()
{
    if (!entity_widget_type[0]) {
        EntityWidgetBaseRtti();
        __rtti_si(entity_widget_type, entity_widget_name, entity_widget_base_type);
    }
    return entity_widget_type;
}
#endif
