// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCEE8)
// 0x001DCEE8 OnCross__17TrickBookFrontEndi
class FEMenu { public: void OnCross(int command); };
__asm__(".equ OnCross__6FEMenui, 0x00157860");
class TrickBookFrontEnd : public FEMenu { public: void OnCross(int command); };
void TrickBookFrontEnd::OnCross(int command) { FEMenu::OnCross(command); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
