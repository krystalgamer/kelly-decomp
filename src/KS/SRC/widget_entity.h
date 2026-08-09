#ifndef WIDGET_ENTITY_H
#define WIDGET_ENTITY_H

#pragma interface

#include "KS/SRC/widget.h"
#include "g++-2/stl_vector.h"

class entity;
class entity_anim_tree;

class entity_widget : public widget {
protected:
    entity *ent;
    vector<entity_anim_tree *> anims;
    vector3d axis;
    rational_t ax;
    rational_t ay;
    rational_t az;
    rational_t rps;

public:
    virtual void show();
    virtual void update_pos();
    virtual void update_scale();
    virtual void update_rot();
    void set_rotation(float x, float y, float z);
    void update_entity_po();
    virtual rational_t get_width();
    virtual rational_t get_height();
    entity *get_ent() const { return ent; }
};

#endif

#if defined(KELLY_DECOMP_FUNCTION_002FEFD8)
// 0x002FEFD8 get_width__13entity_widget
#include "KS/SRC/entity.h"

rational_t entity_widget::get_width() {
    return get_ent()->get_radius();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF008)
// 0x002FF008 get_height__13entity_widget
#include "KS/SRC/entity.h"

rational_t entity_widget::get_height() {
    return get_ent()->get_radius();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FEED8)
// 0x002FEED8 __tf13entity_widget
#include "KS/SRC/rtti.h"
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
