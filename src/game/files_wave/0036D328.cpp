extern bool value;
__asm__(".equ value, 0x00485A60");
bool ks_fx_GetDrawLoose() { return value != 0; }
