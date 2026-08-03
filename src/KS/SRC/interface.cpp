// interface_widget definitions extracted by generated one-function shims.

// 0x00288B08 render__16interface_widget
#include "KS/SRC/interface.h"

void interface_widget::render()
{
    if (cur_reticle)
        cur_reticle->render();

    widget::render();
    KELLY_DECOMP_COMPILER_BARRIER();
}

// 0x00288AA0 frame_advance__16interface_widgetf
extern "C" void frame_widget(void *, float) __asm__("frame_advance__6widgetf");
__asm__(".equ frame_advance__6widgetf,0x0033DF70");
struct reticle_vtable { char padding[64]; short adjustment; short reserved; void (*frame)(void *, float); };
struct reticle { char padding[320]; reticle_vtable *vtable; };
class interface_widget {
    char padding[20];
    int flags;
    char padding2[300];
    reticle *cur_reticle;
public:
    void frame_advance(float dt);
};
void interface_widget::frame_advance(float dt)
{
    int shown = flags & 1;
    if (shown == 0)
        return;
    if (cur_reticle) {
        reticle_vtable *table = cur_reticle->vtable;
        table->frame((char *)cur_reticle + table->adjustment, dt);
    }
    frame_widget(this, dt);
    __asm__ __volatile__("" : : : "memory");
}

// Source implementation boundary.
// 0x002B8BF0 _$_16interface_widget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char base_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ base_vtable, 0x004EB160");
struct object_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_16interface_widget");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
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
