#ifndef KELLY_DECOMP_MENUDRAW_SHARED_H
#define KELLY_DECOMP_MENUDRAW_SHARED_H

#include "KS/SRC/ks/menu_shared.h"

typedef void (*MenudrawSetter)(bool);

enum MenudrawTypeEnum {
    MENUDRAW_TypeIGO,
    MENUDRAW_TypeShadow,
    MENUDRAW_TypeMax
};

extern MenudrawSetter MENUDRAW_Set[MENUDRAW_TypeMax];
extern int MENUDRAW_Flags[MENUDRAW_TypeMax];
extern int MENUDRAW_EntityFlags[32];

class MenuEntityDraw : public Menu {
public:
    MenuEntityDraw(Menu *parent, int entries, MenuEntry **entry);
    virtual ~MenuEntityDraw();
    virtual void OnOpen(Menu *close_to, MenuSystem *control);
    virtual void OnClose(bool to_parent);
    virtual void OnTick(float delta_time);
};

class MenuParticleDraw : public Menu {
public:
    MenuParticleDraw(Menu *parent, int entries, MenuEntry **entry);
    virtual ~MenuParticleDraw();
    virtual void OnOpen(Menu *close_to, MenuSystem *control);
    virtual void OnTick(float delta_time);
};

class MenuWaterDraw : public Menu {
public:
    MenuWaterDraw(Menu *parent, int entries, MenuEntry **entry);
    virtual ~MenuWaterDraw();
    virtual void OnOpen(Menu *close_to, MenuSystem *control);
    virtual void OnTick(float delta_time);
};

class MenuDraw : public Menu {
public:
    MenuDraw(Menu *parent, int entries, MenuEntry **entry);
    virtual ~MenuDraw();
    virtual void OnOpen(Menu *close_to, MenuSystem *control);
    virtual void OnTick(float delta_time);
};

extern MenuEntityDraw *MENUDRAW_MenuEntities;
extern MenuParticleDraw *MENUDRAW_MenuParticle;
extern MenuWaterDraw *MENUDRAW_MenuWater;

__asm__(".equ MENUDRAW_Set, 0x0046B268");
__asm__(".equ MENUDRAW_Flags, 0x0058A438");
__asm__(".equ MENUDRAW_MenuEntities, 0x0046B19C");
__asm__(".equ MENUDRAW_MenuParticle, 0x0046B208");
__asm__(".equ MENUDRAW_MenuWater, 0x0046B240");
__asm__(".equ MENUDRAW_EntityFlags, 0x00589EC8");

#endif
