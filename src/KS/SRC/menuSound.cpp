// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EEAF8)
// 0x002EEAF8 OnOpen__9MenuSoundP4MenuP10MenuSystem
class MenuSystem;
class Menu { public: void OnOpen(Menu *previous, MenuSystem *system); };
__asm__(".equ OnOpen__4MenuP4MenuP10MenuSystem, 0x0023EAE0");
class MenuSound : public Menu { public: void OnOpen(Menu *previous, MenuSystem *system); };
void MenuSound::OnOpen(Menu *previous, MenuSystem *system) { Menu::OnOpen(previous, system); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EEB18)
// 0x002EEB18 OnTick__9MenuSoundf
struct menu_vtable {
    char padding[0x18];
    short adjustment;
    short padding2;
    void (*on_tick)(void *self, float delta);
};

class Menu {
    char padding[0x1c];

public:
    menu_vtable *vtable;
};

extern Menu *menu_sources;
__asm__(".equ menu_sources, 0x00434980");

class MenuSound {
public:
    void OnTick(float delta);
};

void MenuSound::OnTick(float delta) {
    register Menu **address __asm__("$3") = (Menu **)0x00430000;
    __asm__ volatile("" : "+r"(address));
    Menu *sources = *(Menu **)((char *)address + 0x4980);
    menu_vtable *table = sources->vtable;
    table->on_tick(
        (char *)sources + table->adjustment,
        delta
    );
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302930)
// 0x00302930 _$_31SoundMenuEntryFunctionFloatEdit
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_31SoundMenuEntryFunctionFloatEdit");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002EED28)
// 0x002EED28 __31SoundMenuEntryFunctionFloatEditPcPfPFP9MenuEntryi_bUifff
#pragma interface
__asm__(".equ _vt$31SoundMenuEntryFunctionFloatEdit, 0x004F1398");
__asm__(".equ __26MenuEntryFunctionFloatEditPcPfPFP9MenuEntryi_bfff, 0x0023FC10");
class MenuEntry{public:int data;virtual~MenuEntry();};typedef bool(*pMenuEntryButtonFunction)(MenuEntry*,int);typedef unsigned int nslSourceId;class MenuEntryFunctionFloatEdit:public MenuEntry{public:char p[52];MenuEntryFunctionFloatEdit(char*,float*,pMenuEntryButtonFunction,float,float,float);};class SoundMenuEntryFunctionFloatEdit:public MenuEntryFunctionFloatEdit{public:nslSourceId src;SoundMenuEntryFunctionFloatEdit(char*,float*,pMenuEntryButtonFunction,nslSourceId,float,float,float);};SoundMenuEntryFunctionFloatEdit::SoundMenuEntryFunctionFloatEdit(char*text,float*t,pMenuEntryButtonFunction func,nslSourceId source,float l,float h,float s):MenuEntryFunctionFloatEdit(text,t,func,l,h,s){src=source;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003028E0)
// 0x003028E0 __tf31SoundMenuEntryFunctionFloatEdit
#include "KS/SRC/rtti_shared.h"
extern "C" void **SoundFloatEditBaseRtti() __asm__("__tf26MenuEntryFunctionFloatEdit");
extern "C" void *sound_float_edit_type[] __asm__("__ti31SoundMenuEntryFunctionFloatEdit");
extern "C" const char sound_float_edit_name[];
extern "C" void *sound_float_edit_base_type[] __asm__("__ti26MenuEntryFunctionFloatEdit");
__asm__(".equ __tf26MenuEntryFunctionFloatEdit, 0x00270810");
__asm__(".equ __ti31SoundMenuEntryFunctionFloatEdit, 0x005A40E0");
__asm__(".equ sound_float_edit_name, 0x004F4DC8");
__asm__(".equ __ti26MenuEntryFunctionFloatEdit, 0x005A3CB0");
extern "C" void **SoundFloatEditRtti() __asm__("__tf31SoundMenuEntryFunctionFloatEdit");
void **SoundFloatEditRtti()
{
    if (!sound_float_edit_type[0]) {
        SoundFloatEditBaseRtti();
        __rtti_si(sound_float_edit_type, sound_float_edit_name, sound_float_edit_base_type);
    }
    return sound_float_edit_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302960)
// 0x00302960 __tf13MenuSoundDraw
#include "KS/SRC/rtti_shared.h"
extern "C" void **MenuSoundDrawBaseRtti() __asm__("__tf4Menu");
extern "C" void *menu_sound_draw_type[] __asm__("__ti13MenuSoundDraw");
extern "C" const char menu_sound_draw_name[];
extern "C" void *menu_sound_draw_base_type[] __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti13MenuSoundDraw, 0x005A40F0");
__asm__(".equ menu_sound_draw_name, 0x004F4DF0");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **MenuSoundDrawRtti() __asm__("__tf13MenuSoundDraw");
void **MenuSoundDrawRtti()
{
    if (!menu_sound_draw_type[0]) {
        MenuSoundDrawBaseRtti();
        __rtti_si(menu_sound_draw_type, menu_sound_draw_name, menu_sound_draw_base_type);
    }
    return menu_sound_draw_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302A18)
// 0x00302A18 __tf9MenuSound
#include "KS/SRC/rtti_shared.h"
extern "C" void **MenuSoundBaseRtti() __asm__("__tf4Menu");
extern "C" void *menu_sound_type[] __asm__("__ti9MenuSound");
extern "C" const char menu_sound_name[];
extern "C" void *menu_sound_base_type[] __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti9MenuSound, 0x005A4100");
__asm__(".equ menu_sound_name, 0x004F4E00");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **MenuSoundRtti() __asm__("__tf9MenuSound");
void **MenuSoundRtti()
{
    if (!menu_sound_type[0]) {
        MenuSoundBaseRtti();
        __rtti_si(menu_sound_type, menu_sound_name, menu_sound_base_type);
    }
    return menu_sound_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003029B8)
// 0x003029B8 _$_13MenuSoundDraw
extern "C" void close_menu(void *,bool) __asm__("Close__4Menub");
extern "C" void resize_menu(void *,int) __asm__("Resize__4Menui");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char menu_vtable[];
__asm__(".equ Close__4Menub,0x0023E470"); __asm__(".equ Resize__4Menui,0x0023E2B0");
__asm__(".equ __builtin_delete,0x002AC6B0"); __asm__(".equ menu_vtable,0x004D5D48");
struct M{char p[0x1c];const void*v;};
extern "C" void d(M*s,int f) __asm__("_$_13MenuSoundDraw");
void d(M*s,int f) {
    s->v=menu_vtable; close_menu(s,true); resize_menu(s,0);
    if(f&1) { object_delete(s); __asm__ __volatile__("" : : : "memory"); }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302A70)
// 0x00302A70 _$_9MenuSound
extern "C" void close_menu(void *,bool) __asm__("Close__4Menub");
extern "C" void resize_menu(void *,int) __asm__("Resize__4Menui");
extern "C" void object_delete(void *) __asm__("__builtin_delete");
extern const char menu_vtable[];
__asm__(".equ Close__4Menub,0x0023E470"); __asm__(".equ Resize__4Menui,0x0023E2B0");
__asm__(".equ __builtin_delete,0x002AC6B0"); __asm__(".equ menu_vtable,0x004D5D48");
struct M{char p[0x1c];const void*v;};
extern "C" void d(M*s,int f) __asm__("_$_9MenuSound");
void d(M*s,int f) {
    s->v=menu_vtable; close_menu(s,true); resize_menu(s,0);
    if(f&1) { object_delete(s); __asm__ __volatile__("" : : : "memory"); }
}
#endif
