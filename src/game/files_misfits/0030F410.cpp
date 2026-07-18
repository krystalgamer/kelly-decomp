extern bool menu_draw_igo;
__asm__(".equ menu_draw_igo, 0x003E7720");
void MENUDRAW_SetDrawIGO(bool value) { menu_draw_igo = value; }
