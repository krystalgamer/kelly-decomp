// render_interface definitions extracted by generated one-function shims.

// 0x00145FD0 __tf16render_interface
#include "KS/SRC/render_interface.h"

extern "C" void **render_base_rtti() __asm__("__tf16entity_interface");
extern "C" void *render_base_type[] __asm__("__ti16entity_interface");
extern "C" void *render_type[] __asm__("__ti16render_interface");
extern "C" const char render_name[];

__asm__(".equ __tf16entity_interface, 0x00113200");
__asm__(".equ __ti16entity_interface, 0x005A26A8");
__asm__(".equ __ti16render_interface, 0x005A2898");
__asm__(".equ render_name, 0x004CEBF8");

extern "C" void **render_rtti() __asm__("__tf16render_interface");
void **render_rtti()
{
    if (!render_type[0]) {
        render_base_rtti();
        __rtti_si(render_type, render_name, render_base_type);
    }
    return render_type;
}
