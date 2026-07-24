// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00288A80) || \
    defined(KELLY_DECOMP_FUNCTION_00288B08)
#include "KS/SRC/interface_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_00288B08)
// 0x00288B08 render__16interface_widget
void interface_widget::render()
{
    if (cur_reticle)
        cur_reticle->render();

    widget::render();
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00288A80)
// 0x00288A80 show__16interface_widget
void interface_widget::show() { widget::show(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00288AA0)
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
#endif
