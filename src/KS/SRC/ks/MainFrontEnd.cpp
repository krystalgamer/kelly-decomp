// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001810E8)
// 0x001810E8 EndWarning__10CareerMenu
struct career_menu_vtable { char padding[0x70]; short adjustment; short padding2; void (*on_activate)(void *self); };
class CareerMenu { char padding0[0x74]; career_menu_vtable *vtable; char padding1[0x1c]; int warning_up; public: void EndWarning(); };
void CareerMenu::EndWarning() { warning_up = 0; career_menu_vtable *table = vtable; table->on_activate((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00183C58)
// 0x00183C58 Update__15MultiplayerMenuf
class FEMenu { public: void Update(float dt); };
__asm__(".equ Update__6FEMenuf, 0x00156DC8");
class MultiplayerMenu : public FEMenu { public: void Update(float dt); void UpdateDisable(); };
__asm__(".equ UpdateDisable__15MultiplayerMenu, 0x00183DC8");
void MultiplayerMenu::Update(float dt) { FEMenu::Update(dt); UpdateDisable(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
