// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001BB850)
// 0x001BB850 OnButtonRelease__15CreditsFrontEndii
class CreditsFrontEnd { char padding[0x170]; bool up_pressed; bool down_pressed; public: void OnButtonRelease(int controller, int button); };
void CreditsFrontEnd::OnButtonRelease(int controller, int button) { if (button == 2) up_pressed = false; else if (button == 3) down_pressed = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001BB7B0)
// 0x001BB7B0 OnCross__15CreditsFrontEndi
struct CreditsVTable { char padding[0xc0]; short adjustment; short padding2; void (*OnTriangle)(void *self, int command); };
class CreditsFrontEnd { char padding[0x74]; CreditsVTable *vtable; public: void OnCross(int command); };
void CreditsFrontEnd::OnCross(int command) { CreditsVTable *table = vtable; table->OnTriangle((char *)this + table->adjustment, command); }
#endif
