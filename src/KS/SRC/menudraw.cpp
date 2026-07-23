// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0030F400)
// 0x0030F400 MENUDRAW_GetDrawIGO__Fv
extern bool menu_draw_igo;
__asm__(".equ menu_draw_igo, 0x003E7720");
bool MENUDRAW_GetDrawIGO() { return menu_draw_igo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030F410)
// 0x0030F410 MENUDRAW_SetDrawIGO__Fb
extern bool menu_draw_igo;
__asm__(".equ menu_draw_igo, 0x003E7720");
void MENUDRAW_SetDrawIGO(bool value) { menu_draw_igo = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030F420)
// 0x0030F420 MENUDRAW_GetDrawShadow__Fv
extern bool menu_draw_shadow;
__asm__(".equ menu_draw_shadow, 0x00484FC0");
bool MENUDRAW_GetDrawShadow() { return menu_draw_shadow != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030F430)
// 0x0030F430 MENUDRAW_SetDrawShadow__Fb
extern bool menu_draw_shadow;
__asm__(".equ menu_draw_shadow, 0x00484FC0");
void MENUDRAW_SetDrawShadow(bool value) { menu_draw_shadow = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030EE00)
// 0x0030EE00 MENUDRAW_AllEntitiesOff__FP9MenuEntryi
class MenuEntry;
void Setter(bool value) __asm__("MENUDRAW_SetAllEntities__Fb");
__asm__(".equ MENUDRAW_SetAllEntities__Fb, 0x0030EDB0");
bool MENUDRAW_AllEntitiesOff(MenuEntry *entry, int button) { if (button == 7) Setter(false); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030EE28)
// 0x0030EE28 MENUDRAW_AllEntitiesOn__FP9MenuEntryi
class MenuEntry;
void Setter(bool value) __asm__("MENUDRAW_SetAllEntities__Fb");
__asm__(".equ MENUDRAW_SetAllEntities__Fb, 0x0030EDB0");
bool MENUDRAW_AllEntitiesOn(MenuEntry *entry, int button) { if (button == 7) Setter(true); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030EF90)
// 0x0030EF90 MENUDRAW_AllWaterOff__FP9MenuEntryi
class MenuEntry;
void Setter(bool value) __asm__("MENUDRAW_SetAllWater__Fb");
__asm__(".equ MENUDRAW_SetAllWater__Fb, 0x0030EF58");
bool MENUDRAW_AllWaterOff(MenuEntry *entry, int button) { if (button == 7) Setter(false); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030EFB8)
// 0x0030EFB8 MENUDRAW_AllWaterOn__FP9MenuEntryi
class MenuEntry;
void Setter(bool value) __asm__("MENUDRAW_SetAllWater__Fb");
__asm__(".equ MENUDRAW_SetAllWater__Fb, 0x0030EF58");
bool MENUDRAW_AllWaterOn(MenuEntry *entry, int button) { if (button == 7) Setter(true); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030F120)
// 0x0030F120 MENUDRAW_AllParticleOff__FP9MenuEntryi
class MenuEntry;
void Setter(bool value) __asm__("MENUDRAW_SetAllParticle__Fb");
__asm__(".equ MENUDRAW_SetAllParticle__Fb, 0x0030F0E8");
bool MENUDRAW_AllParticleOff(MenuEntry *entry, int button) { if (button == 7) Setter(false); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030F148)
// 0x0030F148 MENUDRAW_AllParticleOn__FP9MenuEntryi
class MenuEntry;
void Setter(bool value) __asm__("MENUDRAW_SetAllParticle__Fb");
__asm__(".equ MENUDRAW_SetAllParticle__Fb, 0x0030F0E8");
bool MENUDRAW_AllParticleOn(MenuEntry *entry, int button) { if (button == 7) Setter(true); return true; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030F380)
// 0x0030F380 MENUDRAW_AllOff__FP9MenuEntryi
class MenuEntry;
extern void MENUDRAW_SetAll(bool); extern void MENUDRAW_SetAllEntities(bool); extern void MENUDRAW_SetAllParticle(bool); extern void MENUDRAW_SetAllWater(bool);
asm(".equ MENUDRAW_SetAll__Fb, 0x0030F348"); asm(".equ MENUDRAW_SetAllEntities__Fb, 0x0030EDB0"); asm(".equ MENUDRAW_SetAllParticle__Fb, 0x0030F0E8"); asm(".equ MENUDRAW_SetAllWater__Fb, 0x0030EF58");
bool MENUDRAW_AllOff(MenuEntry *, int buttonid)
{
    if (buttonid == 7) {
        MENUDRAW_SetAll(false);
        MENUDRAW_SetAllEntities(false);
        MENUDRAW_SetAllParticle(false);
        MENUDRAW_SetAllWater(false);
    }
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0030F3C0)
// 0x0030F3C0 MENUDRAW_AllOn__FP9MenuEntryi
class MenuEntry;
extern void MENUDRAW_SetAll(bool); extern void MENUDRAW_SetAllEntities(bool); extern void MENUDRAW_SetAllParticle(bool); extern void MENUDRAW_SetAllWater(bool);
asm(".equ MENUDRAW_SetAll__Fb, 0x0030F348"); asm(".equ MENUDRAW_SetAllEntities__Fb, 0x0030EDB0"); asm(".equ MENUDRAW_SetAllParticle__Fb, 0x0030F0E8"); asm(".equ MENUDRAW_SetAllWater__Fb, 0x0030EF58");
bool MENUDRAW_AllOn(MenuEntry *, int buttonid)
{
    if (buttonid == 7) {
        MENUDRAW_SetAll(true);
        MENUDRAW_SetAllEntities(true);
        MENUDRAW_SetAllParticle(true);
        MENUDRAW_SetAllWater(true);
    }
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00313E20)
// 0x00313E20 __tf14MenuEntityDraw
#include "KS/SRC/rtti_shared.h"
extern "C" void **MenuEntityDrawBaseRtti() __asm__("__tf4Menu");
extern "C" void *menu_entity_draw_type[] __asm__("__ti14MenuEntityDraw");
extern "C" const char menu_entity_draw_name[];
extern "C" void *menu_entity_draw_base_type[] __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti14MenuEntityDraw, 0x005A41D0");
__asm__(".equ menu_entity_draw_name, 0x00508AC0");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **MenuEntityDrawRtti() __asm__("__tf14MenuEntityDraw");
void **MenuEntityDrawRtti()
{
    if (!menu_entity_draw_type[0]) {
        MenuEntityDrawBaseRtti();
        __rtti_si(menu_entity_draw_type, menu_entity_draw_name, menu_entity_draw_base_type);
    }
    return menu_entity_draw_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00313ED8)
// 0x00313ED8 __tf16MenuParticleDraw
#include "KS/SRC/rtti_shared.h"
extern "C" void **MenuParticleDrawBaseRtti() __asm__("__tf4Menu");
extern "C" void *menu_particle_draw_type[] __asm__("__ti16MenuParticleDraw");
extern "C" const char menu_particle_draw_name[];
extern "C" void *menu_particle_draw_base_type[] __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti16MenuParticleDraw, 0x005A41E0");
__asm__(".equ menu_particle_draw_name, 0x00508AD8");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **MenuParticleDrawRtti() __asm__("__tf16MenuParticleDraw");
void **MenuParticleDrawRtti()
{
    if (!menu_particle_draw_type[0]) {
        MenuParticleDrawBaseRtti();
        __rtti_si(
            menu_particle_draw_type,
            menu_particle_draw_name,
            menu_particle_draw_base_type
        );
    }
    return menu_particle_draw_type;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00313F90)
// 0x00313F90 __tf13MenuWaterDraw
#include "KS/SRC/rtti_shared.h"
extern "C" void **MenuWaterDrawBaseRtti() __asm__("__tf4Menu");
extern "C" void *menu_water_draw_type[] __asm__("__ti13MenuWaterDraw");
extern "C" const char menu_water_draw_name[];
extern "C" void *menu_water_draw_base_type[] __asm__("__ti4Menu");
__asm__(".equ __tf4Menu, 0x002703D0");
__asm__(".equ __ti13MenuWaterDraw, 0x005A41F0");
__asm__(".equ menu_water_draw_name, 0x00508AF0");
__asm__(".equ __ti4Menu, 0x005120F8");
extern "C" void **MenuWaterDrawRtti() __asm__("__tf13MenuWaterDraw");
void **MenuWaterDrawRtti()
{
    if (!menu_water_draw_type[0]) {
        MenuWaterDrawBaseRtti();
        __rtti_si(menu_water_draw_type, menu_water_draw_name, menu_water_draw_base_type);
    }
    return menu_water_draw_type;
}
#endif
