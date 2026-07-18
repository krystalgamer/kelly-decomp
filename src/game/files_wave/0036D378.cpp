extern bool ks_fx_draw_underwater;
__asm__(".equ ks_fx_draw_underwater, 0x00485A68");
void ks_fx_SetDrawUnderwater(bool value) { ks_fx_draw_underwater = value; }
