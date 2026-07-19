// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00302820)
// 0x00302820 OnButtonPress__26ChangeCamMenuEntryFunctioni
class ChangeCamMenuEntryFunction { public: bool ChangePOButton(int button); void OnButtonPress(int button); };
__asm__(".equ ChangePOButton__26ChangeCamMenuEntryFunctioni, 0x002EDD98");
void ChangeCamMenuEntryFunction::OnButtonPress(int button) { ChangePOButton(button); __asm__ volatile(""); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003028C0)
// 0x003028C0 OnButtonPress__26DeleteCamMenuEntryFunctioni
class DeleteCamMenuEntryFunction { public: bool DeleteCamButton(int button); void OnButtonPress(int button); };
__asm__(".equ DeleteCamButton__26DeleteCamMenuEntryFunctioni, 0x002EDDD8");
void DeleteCamMenuEntryFunction::OnButtonPress(int button) { DeleteCamButton(button); __asm__ volatile(""); }
#endif
