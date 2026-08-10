// interface_widget definitions extracted by generated one-function shims.

// 0x00288B08 render__16interface_widget
#include "KS/SRC/interface.h"

extern "C" void render_widget(widget *value)
    __asm__("render__6widget");
__asm__(".equ render__6widget, 0x0033E128");

void interface_widget::render()
{
    if (cur_reticle)
        cur_reticle->render();

    void (*render_base)(widget *) = render_widget;
    render_base(this);
}

// Source implementation boundary.
// 0x002B8BA0 __tf16interface_widget
#include "KS/SRC/rtti.h"
#include "KS/SRC/interface.h"

extern "C" void **interface_widget_base_rtti() __asm__("__tf6widget");
extern "C" void *interface_widget_type[] __asm__("__ti16interface_widget");
extern "C" const char interface_widget_name[];
extern "C" void *interface_widget_base_type[] __asm__("__ti6widget");

__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti16interface_widget, 0x005A3E10");
__asm__(".equ interface_widget_name, 0x004FE550");
__asm__(".equ __ti6widget, 0x00512148");

extern "C" void **interface_widget_rtti()
    __asm__("__tf16interface_widget");
void **interface_widget_rtti()
{
    if (!interface_widget_type[0]) {
        interface_widget_base_rtti();
        __rtti_si(
            interface_widget_type,
            interface_widget_name,
            interface_widget_base_type
        );
    }
    return interface_widget_type;
}
