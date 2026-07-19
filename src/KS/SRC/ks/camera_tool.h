// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00302820)
// 0x00302820 OnButtonPress__26ChangeCamMenuEntryFunctioni
class ChangeCamMenuEntryFunction { public: bool ChangePOButton(int button); void OnButtonPress(int button); };
__asm__(".equ ChangePOButton__26ChangeCamMenuEntryFunctioni, 0x002EDD98");
void ChangeCamMenuEntryFunction::OnButtonPress(int button) { ChangePOButton(button); __asm__ volatile(""); }
#endif
