// Matching decompilation blocks selected by generated build shims.

// 0x002BA5B0 update_pos__13entity_widget
#include "KS/SRC/widget_entity.h"

__asm__(".equ update_pos__6widget, 0x0033E650");
__asm__(".equ update_entity_po__13entity_widget, 0x002BAA98");
void update_entity_transform(entity_widget *self)
    __asm__("update_entity_po__13entity_widget");
void entity_widget::update_pos() {
    widget::update_pos();
    void (*update_transform)(entity_widget *) = update_entity_transform;
    update_transform(this);
}

// 0x002BA5E0 update_scale__13entity_widget
#include "KS/SRC/widget_entity.h"

__asm__(".equ update_scale__6widget, 0x0033E710");
__asm__(".equ update_entity_po__13entity_widget, 0x002BAA98");
void update_entity_transform(entity_widget *self)
    __asm__("update_entity_po__13entity_widget");
void entity_widget::update_scale() {
    widget::update_scale();
    void (*update_transform)(entity_widget *) = update_entity_transform;
    update_transform(this);
}

#if defined(KELLY_DECOMP_FUNCTION_002BAA60)
// 0x002BAA60 set_rotation__13entity_widgetfff
#include "KS/SRC/widget_entity.h"

void entity_widget::set_rotation(float x, float y, float z)
{
    ax = x;
    ay = y;
    az = z;
    update_rot();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9B18)
// 0x002B9B18 show__13entity_widget
#include "KS/SRC/widget_entity.h"

__asm__(".equ show__6widget, 0x0033DDD0");

void entity_widget::show()
{
    widget::show();
    update_rot();
}
#endif
