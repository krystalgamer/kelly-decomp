// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00259840)
// 0x00259840 TakePhoto__FfPPv
bool TakePhoto(float dt, void** data) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00259788)
// 0x00259788 _$_11player_info
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void PlayerInfoDtor(void *self, int deleting) __asm__("_$_11player_info");
void PlayerInfoDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
