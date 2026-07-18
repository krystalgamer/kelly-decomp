extern bool value;
__asm__(".equ value, 0x00485A54");
bool ks_fx_GetDrawTrailGeom() { return value != 0; }
