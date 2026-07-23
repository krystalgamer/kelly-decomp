// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B8BF0)
// 0x002B8BF0 _$_16interface_widget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char base_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ base_vtable, 0x004EB160");
struct object_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_16interface_widget");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
#if defined(KELLY_DECOMP_FUNCTION_002B8BA0)
#include "KS/SRC/rtti_shared.h"
#include "KS/SRC/interface_shared.h"

extern "C" void **interface_widget_base_rtti() __asm__("__tf6widget");
extern "C" void *interface_widget_type[] __asm__("__ti16interface_widget");
extern "C" const char interface_widget_name[];
extern "C" void *interface_widget_base_type[] __asm__("__ti6widget");

__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti16interface_widget, 0x005A3E10");
__asm__(".equ interface_widget_name, 0x004FE550");
__asm__(".equ __ti6widget, 0x00512148");

// 0x002B8BA0 __tf16interface_widget
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
#endif
