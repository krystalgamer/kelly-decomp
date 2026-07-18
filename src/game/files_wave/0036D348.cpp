extern bool value;
__asm__(".equ value, 0x00485A64");
bool ks_fx_GetDrawWeather() { return value != 0; }
