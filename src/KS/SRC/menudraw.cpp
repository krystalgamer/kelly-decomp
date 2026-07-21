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
