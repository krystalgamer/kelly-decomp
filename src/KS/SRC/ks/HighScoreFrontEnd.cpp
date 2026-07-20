// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001CD9B0)
// 0x001CD9B0 OnStart__13NameEntryMenui
extern "C" void FEMenuOnStart(void *self, int command) __asm__("OnStart__6FEMenui");
__asm__(".equ OnStart__6FEMenui, 0x001577B8");
class NameEntryMenu { char padding[0x2dc]; bool in_game; public: void OnStart(int command); };
void NameEntryMenu::OnStart(int command) { if (!in_game) { FEMenuOnStart(this, command); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif
