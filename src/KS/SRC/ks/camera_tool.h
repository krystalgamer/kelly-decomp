// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003027A0)
// 0x003027A0 __tf26ChangeCamMenuEntryFunction
#include "KS/SRC/rtti.h"
extern "C" void **ChangeCamMenuBaseRtti() __asm__("__tf14MenuEntryLabel");
extern "C" void *change_cam_menu_type[] __asm__("__ti26ChangeCamMenuEntryFunction");
extern "C" const char change_cam_menu_name[];
extern "C" void *menu_entry_label_type[] __asm__("__ti14MenuEntryLabel");
__asm__(".equ __tf14MenuEntryLabel, 0x00270550");
__asm__(".equ __ti26ChangeCamMenuEntryFunction, 0x005A40C0");
__asm__(".equ change_cam_menu_name, 0x004F4D88");
__asm__(".equ __ti14MenuEntryLabel, 0x005A3C80");
extern "C" void **ChangeCamMenuRtti() __asm__("__tf26ChangeCamMenuEntryFunction");
void **ChangeCamMenuRtti()
{
    if (!change_cam_menu_type[0]) {
        ChangeCamMenuBaseRtti();
        __rtti_si(change_cam_menu_type, change_cam_menu_name, menu_entry_label_type);
    }
    return change_cam_menu_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00302840)
// 0x00302840 __tf26DeleteCamMenuEntryFunction
#include "KS/SRC/rtti.h"
extern "C" void **DeleteCamMenuBaseRtti() __asm__("__tf14MenuEntryLabel");
extern "C" void *delete_cam_menu_type[] __asm__("__ti26DeleteCamMenuEntryFunction");
extern "C" const char delete_cam_menu_name[];
extern "C" void *delete_cam_menu_base_type[] __asm__("__ti14MenuEntryLabel");
__asm__(".equ __tf14MenuEntryLabel, 0x00270550");
__asm__(".equ __ti26DeleteCamMenuEntryFunction, 0x005A40D0");
__asm__(".equ delete_cam_menu_name, 0x004F4DA8");
__asm__(".equ __ti14MenuEntryLabel, 0x005A3C80");
extern "C" void **DeleteCamMenuRtti() __asm__("__tf26DeleteCamMenuEntryFunction");
void **DeleteCamMenuRtti()
{
    if (!delete_cam_menu_type[0]) {
        DeleteCamMenuBaseRtti();
        __rtti_si(delete_cam_menu_type, delete_cam_menu_name, delete_cam_menu_base_type);
    }
    return delete_cam_menu_type;
}
#endif
