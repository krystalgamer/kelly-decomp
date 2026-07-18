extern bool ks_fx_draw_trail_geom;
__asm__(".equ ks_fx_draw_trail_geom, 0x00485A54");
void ks_fx_SetDrawTrailGeom(bool value) { ks_fx_draw_trail_geom = value; }
