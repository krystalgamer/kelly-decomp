extern bool menu_draw_shadow;
__asm__(".equ menu_draw_shadow, 0x00484FC0");
void MENUDRAW_SetDrawShadow(bool value) { menu_draw_shadow = value; }
