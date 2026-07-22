#ifndef KELLY_DECOMP_MENUDRAW_SHARED_H
#define KELLY_DECOMP_MENUDRAW_SHARED_H

class MenuEntityDraw {
    void *parent;
    int entries;

public:
    int NumEntries() const { return entries; }
};

extern MenuEntityDraw *MENUDRAW_MenuEntities;
extern int MENUDRAW_EntityFlags[32];

__asm__(".equ MENUDRAW_MenuEntities, 0x0046B19C");
__asm__(".equ MENUDRAW_EntityFlags, 0x00589EC8");

#endif
