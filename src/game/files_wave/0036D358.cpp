extern bool ks_fx_draw_weather;
__asm__(".equ ks_fx_draw_weather, 0x00485A64");
void ks_fx_SetDrawWeather(bool value) { ks_fx_draw_weather = value; }
