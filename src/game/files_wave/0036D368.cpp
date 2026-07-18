extern bool value;
__asm__(".equ value, 0x00485A68");
bool ks_fx_GetDrawUnderwater() { return value != 0; }
