extern bool ks_fx_draw_spray;
__asm__(".equ ks_fx_draw_spray, 0x00485A58");
void ks_fx_SetDrawSpray(bool value) { ks_fx_draw_spray = value; }
