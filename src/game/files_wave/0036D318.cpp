extern bool ks_fx_draw_spray_geom;
__asm__(".equ ks_fx_draw_spray_geom, 0x00485A5C");
void ks_fx_SetDrawSprayGeom(bool value) { ks_fx_draw_spray_geom = value; }
