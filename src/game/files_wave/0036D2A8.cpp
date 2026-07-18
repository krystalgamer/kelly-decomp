extern bool value;
__asm__(".equ value, 0x00485A50");
bool ks_fx_GetDrawCrash() { return value != 0; }
