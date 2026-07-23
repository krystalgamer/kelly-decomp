// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002FFE98)
// 0x002FFE98 __tf7element
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512178"); asm(".equ type_name, 0x004F4CC0");
extern "C" void *GetTypeInfo() __asm__("__tf7element");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFD48)
// 0x002FFD48 __tf10move_event
#include "KS/SRC/rtti_shared.h"
extern "C" void **MoveEventBaseRtti() __asm__("__tf5event");
extern "C" void *move_event_type[] __asm__("__ti10move_event");
extern "C" const char move_event_name[];
extern "C" void *move_event_base_type[] __asm__("__ti5event");
__asm__(".equ __tf5event, 0x00302BD8");
__asm__(".equ __ti10move_event, 0x005A4010");
__asm__(".equ move_event_name, 0x004F4C80");
__asm__(".equ __ti5event, 0x00512188");
extern "C" void **MoveEventRtti() __asm__("__tf10move_event");
void **MoveEventRtti()
{
    if (!move_event_type[0]) {
        MoveEventBaseRtti();
        __rtti_si(move_event_type, move_event_name, move_event_base_type);
    }
    return move_event_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFDA0)
// 0x002FFDA0 __tf11color_event
#include "KS/SRC/rtti_shared.h"
extern "C" void **ColorEventBaseRtti() __asm__("__tf5event");
extern "C" void *color_event_type[] __asm__("__ti11color_event");
extern "C" const char color_event_name[];
extern "C" void *color_event_base_type[] __asm__("__ti5event");
__asm__(".equ __tf5event, 0x00302BD8");
__asm__(".equ __ti11color_event, 0x005A4020");
__asm__(".equ color_event_name, 0x004F4C90");
__asm__(".equ __ti5event, 0x00512188");
extern "C" void **ColorEventRtti() __asm__("__tf11color_event");
void **ColorEventRtti()
{
    if (!color_event_type[0]) {
        ColorEventBaseRtti();
        __rtti_si(color_event_type, color_event_name, color_event_base_type);
    }
    return color_event_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002FFDF0)
// 0x002FFDF0 __tf12rotate_event
#include "KS/SRC/rtti_shared.h"
extern "C" void **RotateEventBaseRtti() __asm__("__tf5event");
extern "C" void *rotate_event_type[] __asm__("__ti12rotate_event");
extern "C" const char rotate_event_name[];
extern "C" void *rotate_event_base_type[] __asm__("__ti5event");
__asm__(".equ __tf5event, 0x00302BD8");
__asm__(".equ __ti12rotate_event, 0x005A4030");
__asm__(".equ rotate_event_name, 0x004F4CA0");
__asm__(".equ __ti5event, 0x00512188");
extern "C" void **RotateEventRtti() __asm__("__tf12rotate_event");
void **RotateEventRtti()
{
    if (!rotate_event_type[0]) {
        RotateEventBaseRtti();
        __rtti_si(rotate_event_type, rotate_event_name, rotate_event_base_type);
    }
    return rotate_event_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302BD8)
// 0x00302BD8 __tf5event
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512188"); asm(".equ type_name, 0x004F4E38");
extern "C" void *GetTypeInfo() __asm__("__tf5event");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
