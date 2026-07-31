// Element definitions extracted by generated one-function shims.

// 0x002FFE98 __tf7element
extern "C" void __rtti_user(void *, const char *);
__asm__(".equ __rtti_user, 0x003CE2F8");
extern unsigned int element_typeinfo[] __asm__("element_typeinfo");
extern const char element_type_name[] __asm__("element_type_name");
__asm__(".equ element_typeinfo, 0x00512178");
__asm__(".equ element_type_name, 0x004F4CC0");
extern "C" void *ElementRtti() __asm__("__tf7element");
void *ElementRtti()
{
    if (!element_typeinfo[0])
        __rtti_user(element_typeinfo, element_type_name);
    return element_typeinfo;
}

// 0x002FFD48 __tf10move_event
#include "KS/SRC/rtti.h"
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

// 0x002FFDA0 __tf11color_event
#include "KS/SRC/rtti.h"
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

// 0x002FFDF0 __tf12rotate_event
#include "KS/SRC/rtti.h"
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

// 0x002FFE40 __tf11scale_event
#include "KS/SRC/rtti.h"
extern "C" void **ScaleEventBaseRtti() __asm__("__tf5event");
extern "C" void *scale_event_type[] __asm__("__ti11scale_event");
extern "C" const char scale_event_name[];
extern "C" void *scale_event_base_type[] __asm__("__ti5event");
__asm__(".equ __tf5event, 0x00302BD8");
__asm__(".equ __ti11scale_event, 0x005A4040");
__asm__(".equ scale_event_name, 0x004F4CB0");
__asm__(".equ __ti5event, 0x00512188");
extern "C" void **ScaleEventRtti() __asm__("__tf11scale_event");
void **ScaleEventRtti()
{
    if (!scale_event_type[0]) {
        ScaleEventBaseRtti();
        __rtti_si(scale_event_type, scale_event_name, scale_event_base_type);
    }
    return scale_event_type;
}

// 0x00302BD8 __tf5event
extern "C" void __rtti_user(void *, const char *);
__asm__(".equ __rtti_user, 0x003CE2F8");
extern unsigned int event_typeinfo[] __asm__("event_typeinfo");
extern const char event_type_name[] __asm__("event_type_name");
__asm__(".equ event_typeinfo, 0x00512188");
__asm__(".equ event_type_name, 0x004F4E38");
extern "C" void *EventRtti() __asm__("__tf5event");
void *EventRtti()
{
    if (!event_typeinfo[0])
        __rtti_user(event_typeinfo, event_type_name);
    return event_typeinfo;
}

// 0x002FFEE8 rotate_to__7elementfff
#include "KS/SRC/element.h"
struct rotate_event_layout {
    int type;
    element *owner;
    float wait;
    float duration;
    int elapsed;
    void *vtable;
    float angle;
};
extern "C" void *allocate_event(
    unsigned int,
    unsigned int,
    const char *,
    int) __asm__("__nw__FUiUiPCci");
extern void *rotate_event_vtable;
extern const char rotate_event_source_file[];
extern "C" void add_element_event(
    element *,
    event *) __asm__("add_event__7elementP5event");
__asm__(".equ __nw__FUiUiPCci, 0x002AC578");
__asm__(".equ rotate_event_vtable, 0x004F1E20");
__asm__(".equ rotate_event_source_file, 0x004FFAD8");
__asm__(".equ add_event__7elementP5event, 0x002CA780");
extern "C" void schedule_element_rotation(
    element *self,
    float wait,
    float duration,
    float angle) __asm__("rotate_to__7elementfff");
void schedule_element_rotation(
    element *self,
    float wait,
    float duration,
    float angle)
{
    rotate_event_layout *value = (rotate_event_layout *)
        allocate_event(28, 0, rotate_event_source_file, 0);
    register int type __asm__("$3") = EVENT_Rotate;
    register void *vtable __asm__("$6") = &rotate_event_vtable;
    register element *owner __asm__("$4") = self;
    __asm__ volatile("" : "+r"(owner));
    value->wait = wait;
    register event *argument __asm__("$5") = (event *)value;
    __asm__ volatile("" : "+r"(argument));
    value->duration = duration;
    value->angle = angle;
    value->owner = self;
    value->type = type;
    value->vtable = vtable;
    value->elapsed = 0;
    add_element_event(owner, argument);
    __asm__ volatile("");
}
