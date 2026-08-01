// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/menu.h"

// 0x00240340 I2XColor__FRC9MenuColor
static unsigned int I2XColor(const MenuColor &color)
{
    unsigned int result = ((128 * color.a) / 255) << 0;
    result += color.b << 8;
    result += color.g << 16;
    result += color.r << 24;
    return result;
}

// 0x00240388 MENU_TermMenus__Fv
void MENU_TermMenus()
{
}

// 0x00240488 MENU_ClearRect__Fiiii
void MENU_ClearRect(int arg0, int arg1, int arg2, int arg3)
{
}

// 0x00240500 MENU_DrawStart__Fv
void MENU_DrawStart()
{
}

// 0x00240508 MENU_DrawEnd__Fv
void MENU_DrawEnd()
{
}

// 0x00240510 MENU_TextHeight__FPCc
int MENU_TextHeight(const char *text)
{
    return 10;
}

// 0x00240518 MENU_BorderSizeFactor__Fv
int MENU_BorderSizeFactor()
{
    return 2;
}

// 0x00240520 MENU_BorderSpaceFactor__Fv
int MENU_BorderSpaceFactor()
{
    return 10;
}

// 0x00240528 MENU_TextSeparation__Fv
int MENU_TextSeparation()
{
    return 3;
}
