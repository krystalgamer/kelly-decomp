// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002EED28)
// 0x002EED28 __31SoundMenuEntryFunctionFloatEditPcPfPFP9MenuEntryi_bUifff
#include "KS/SRC/menuSound.h"

__asm__(".equ _vt$31SoundMenuEntryFunctionFloatEdit, 0x004F1398");
__asm__(".equ __26MenuEntryFunctionFloatEditPcPfPFP9MenuEntryi_bfff, 0x0023FC10");
SoundMenuEntryFunctionFloatEdit::SoundMenuEntryFunctionFloatEdit(char*text,float*t,pMenuEntryButtonFunction func,nslSourceId source,float l,float h,float s):MenuEntryFunctionFloatEdit(text,t,func,l,h,s){src=source;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_003028E0)
// 0x003028E0 __tf31SoundMenuEntryFunctionFloatEdit
#include "KS/SRC/rtti.h"
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
#include "KS/SRC/rtti.h"
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
#include "KS/SRC/rtti.h"
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

#if defined(KELLY_DECOMP_FUNCTION_002EEF38)
// 0x002EEF38 Play__FP9MenuEntryi
typedef unsigned int nslSourceId;typedef unsigned int nslSoundId;extern "C" int get_status(nslSoundId)__asm__("nslGetSoundStatus__FUi");extern "C" void stop_sound(nslSoundId)__asm__("nslStopSound__FUi");extern "C" nslSoundId add_sound(nslSourceId)__asm__("nslAddSound__FUi");extern "C" void play_sound(nslSoundId)__asm__("nslPlaySound__FUi");__asm__(".equ nslGetSoundStatus__FUi,0x0038DBA0");__asm__(".equ nslStopSound__FUi,0x0038D288");__asm__(".equ nslAddSound__FUi,0x0038CAF8");__asm__(".equ nslPlaySound__FUi,0x0038CB20");struct MenuEntry{char pad[60];nslSourceId src;nslSoundId snd;};extern "C" bool Play(MenuEntry*entry,int button)__asm__("Play__FP9MenuEntryi");bool Play(MenuEntry*entry,int){int src=entry->src;if(get_status(entry->snd)!=0)stop_sound(entry->snd);else{if(src!=0)entry->snd=add_sound(src);if(entry->snd!=0)play_sound(entry->snd);}return true;}
#endif
