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

#if defined(KELLY_DECOMP_FUNCTION_002FF7A8)
// 0x002FF7A8 __tf12timer_widget
#include "KS/SRC/rtti_shared.h"
extern "C" void **TimerWidgetBaseRtti() __asm__("__tf6widget");
extern "C" void *timer_widget_type[] __asm__("__ti12timer_widget");
extern "C" const char timer_widget_name[];
extern "C" void *timer_widget_base_type[] __asm__("__ti6widget");
__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti12timer_widget, 0x005A3FA0");
__asm__(".equ timer_widget_name, 0x004F4C00");
__asm__(".equ __ti6widget, 0x00512148");
extern "C" void **TimerWidgetRtti() __asm__("__tf12timer_widget");
void **TimerWidgetRtti()
{
    if (!timer_widget_type[0]) {
        TimerWidgetBaseRtti();
        __rtti_si(timer_widget_type, timer_widget_name, timer_widget_base_type);
    }
    return timer_widget_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FF800)
// 0x002FF800 __tf22script_widget_holder_t
#include "KS/SRC/rtti_shared.h"
extern "C" void **ScriptWidgetHolderBaseRtti() __asm__("__tf6widget");
extern "C" void *script_widget_holder_type[] __asm__("__ti22script_widget_holder_t");
extern "C" const char script_widget_holder_name[];
extern "C" void *script_widget_holder_base_type[] __asm__("__ti6widget");
__asm__(".equ __tf6widget, 0x003602B8");
__asm__(".equ __ti22script_widget_holder_t, 0x005A3FB0");
__asm__(".equ script_widget_holder_name, 0x004F4C10");
__asm__(".equ __ti6widget, 0x00512148");
extern "C" void **ScriptWidgetHolderRtti() __asm__("__tf22script_widget_holder_t");
void **ScriptWidgetHolderRtti()
{
    if (!script_widget_holder_type[0]) {
        ScriptWidgetHolderBaseRtti();
        __rtti_si(
            script_widget_holder_type,
            script_widget_holder_name,
            script_widget_holder_base_type
        );
    }
    return script_widget_holder_type;
}
#endif
