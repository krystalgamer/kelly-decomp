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

#if defined(KELLY_DECOMP_FUNCTION_0030F348)
// 0x0030F348 MENUDRAW_SetAll__Fb
extern int MENUDRAW_Flags[2];
__asm__(".equ MENUDRAW_Flags, 0x0058A438");

static void MENUDRAW_SetAll(bool enabled)
{
    __asm__ volatile(
        ".set noreorder\n\t"
        "lui $2,0x58\n\t"
        "daddu $3,$0,$0\n\t"
        "addiu $5,$2,-23496\n\t"
        "nop\n"
        "1:\n\t"
        "sw $4,0($5)\n\t"
        "addiu $3,$3,1\n\t"
        "sltiu $2,$3,2\n\t"
        "nop\n\t"
        "nop\n\t"
        "bnez $2,1b\n\t"
        "addiu $5,$5,4\n\t"
        ".set reorder"
        :
        : "r"(enabled)
        : "$2", "$3", "$5", "memory"
    );
}

__asm__(".globl MENUDRAW_SetAll__Fb");
#endif
