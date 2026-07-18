extern bool value;
__asm__(".equ value, 0x00485A5C");
bool ks_fx_GetDrawSprayGeom() { return value != 0; }
