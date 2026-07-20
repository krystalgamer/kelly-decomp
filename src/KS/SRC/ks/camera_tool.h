// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00302820)
// 0x00302820 OnButtonPress__26ChangeCamMenuEntryFunctioni
class ChangeCamMenuEntryFunction { public: bool ChangePOButton(int button); void OnButtonPress(int button); };
__asm__(".equ ChangePOButton__26ChangeCamMenuEntryFunctioni, 0x002EDD98");
void ChangeCamMenuEntryFunction::OnButtonPress(int button) { ChangePOButton(button); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003028C0)
// 0x003028C0 OnButtonPress__26DeleteCamMenuEntryFunctioni
class DeleteCamMenuEntryFunction { public: bool DeleteCamButton(int button); void OnButtonPress(int button); };
__asm__(".equ DeleteCamButton__26DeleteCamMenuEntryFunctioni, 0x002EDDD8");
void DeleteCamMenuEntryFunction::OnButtonPress(int button) { DeleteCamButton(button); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_003027F0)
// 0x003027F0 _$_26ChangeCamMenuEntryFunction
extern "C" void BuiltinDelete(void *memory) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");

extern const char target_vtable[];
__asm__(".equ target_vtable, 0x004D5C98");

struct target_layout {
    char padding[0x4];
    const void *vtable;
};

extern "C" void TargetDtor(void *self, int deleting)
    __asm__("_$_26ChangeCamMenuEntryFunction");

void TargetDtor(void *self, int deleting) {
    ((target_layout *)self)->vtable = target_vtable;
    if (deleting & 1) {
        BuiltinDelete(self);
    }
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif
