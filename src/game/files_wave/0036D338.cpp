extern bool ks_fx_draw_loose;
__asm__(".equ ks_fx_draw_loose, 0x00485A60");
void ks_fx_SetDrawLoose(bool value) { ks_fx_draw_loose = value; }
