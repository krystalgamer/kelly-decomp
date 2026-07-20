// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001BB850)
// 0x001BB850 OnButtonRelease__15CreditsFrontEndii
class CreditsFrontEnd { char padding[0x170]; bool up_pressed; bool down_pressed; public: void OnButtonRelease(int controller, int button); };
void CreditsFrontEnd::OnButtonRelease(int controller, int button) { if (button == 2) up_pressed = false; else if (button == 3) down_pressed = false; }
#endif
