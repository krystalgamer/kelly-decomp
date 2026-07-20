// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00260898)
// 0x00260898 _$_9Challenge
extern "C" void EventRecipientDtor(void *self, int deleting) __asm__("_$_14EventRecipient");
extern const char challenge_vtable[];
__asm__(".equ _$_14EventRecipient, 0x00349B98");
__asm__(".equ challenge_vtable, 0x004D6288");
struct challenge_layout { const void *vtable; };
extern "C" void ChallengeDtor(void *self, int deleting) __asm__("_$_9Challenge");
void ChallengeDtor(void *self, int deleting) { ((challenge_layout *)self)->vtable = challenge_vtable; EventRecipientDtor(self, deleting); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
