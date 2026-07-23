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
