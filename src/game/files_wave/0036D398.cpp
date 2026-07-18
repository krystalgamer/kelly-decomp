extern bool ks_fx_draw_splashes;
__asm__(".equ ks_fx_draw_splashes, 0x00485A6C");
void ks_fx_SetDrawSplashes(bool value) { ks_fx_draw_splashes = value; }
