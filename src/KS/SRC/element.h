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

#if defined(KELLY_DECOMP_FUNCTION_00302BD8)
// 0x00302BD8 __tf5event
extern "C" void __rtti_user(void *, const char *); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00512188"); asm(".equ type_name, 0x004F4E38");
extern "C" void *GetTypeInfo() __asm__("__tf5event");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif
