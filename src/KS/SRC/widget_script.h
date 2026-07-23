// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FF780)
// 0x002FF780 _$_11clue_widget
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char base_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ base_vtable, 0x004F2EA8");
struct object_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_11clue_widget");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF850)
// 0x002FF850 _$_22script_widget_holder_t
extern "C" void BaseDtor(void *self, int deleting) __asm__("_$_6widget");
extern const char base_vtable[];
__asm__(".equ _$_6widget, 0x0033DC68");
__asm__(".equ base_vtable, 0x004F2C48");
struct object_layout { char padding[0x140]; const void *vtable; };
extern "C" void DerivedDtor(void *self, int deleting) __asm__("_$_22script_widget_holder_t");
void DerivedDtor(void *self, int deleting) { ((object_layout *)self)->vtable = base_vtable; BaseDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF730)
// 0x002FF730 __tf11clue_widget
#include "KS/SRC/rtti_shared.h"
extern "C" void **ClueWidgetBaseRtti() __asm__("__tf6widget");
extern "C" void *clue_widget_type[] __asm__("__ti11clue_widget");
extern "C" const char clue_widget_name[];
extern "C" void *clue_widget_base_type[] __asm__("__ti6widget");
__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti11clue_widget, 0x005A3F90");
__asm__(".equ clue_widget_name, 0x004F4BF0");
__asm__(".equ __ti6widget, 0x00512148");
extern "C" void **ClueWidgetRtti() __asm__("__tf11clue_widget");
void **ClueWidgetRtti()
{
    if (!clue_widget_type[0]) {
        ClueWidgetBaseRtti();
        __rtti_si(clue_widget_type, clue_widget_name, clue_widget_base_type);
    }
    return clue_widget_type;
}
#endif
