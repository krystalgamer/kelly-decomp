extern bool ks_fx_draw_crash;
__asm__(".equ ks_fx_draw_crash, 0x00485A50");
void ks_fx_SetDrawCrash(bool value) { ks_fx_draw_crash = value; }
