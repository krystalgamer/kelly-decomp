extern bool value;
__asm__(".equ value, 0x00485A58");
bool ks_fx_GetDrawSpray() { return value != 0; }
