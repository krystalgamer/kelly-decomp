// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDC80)
// 0x001DDC80 OnCross__14EnterCheatMenui
struct MenuVTable { char padding[0x158]; short adjustment; short padding2; void (*call)(void *self); };
class EnterCheatMenu { char padding[0x74]; MenuVTable *vtable; public: void OnCross(int command); };
void EnterCheatMenu::OnCross(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif
