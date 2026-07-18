extern bool value;
__asm__(".equ value, 0x00485A6C");
bool ks_fx_GetDrawSplashes() { return value != 0; }
