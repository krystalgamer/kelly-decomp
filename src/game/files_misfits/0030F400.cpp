extern bool menu_draw_igo;
__asm__(".equ menu_draw_igo, 0x003E7720");
bool MENUDRAW_GetDrawIGO() { return menu_draw_igo; }
