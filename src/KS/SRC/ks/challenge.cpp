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

#if defined(KELLY_DECOMP_FUNCTION_00260860)
// 0x00260860 __9Challenge
extern "C" void EventRecipientCtor(void *self)
    __asm__("__14EventRecipient");
__asm__(".equ __14EventRecipient, 0x00349B58");

extern const char challenge_vtable[];
__asm__(".equ challenge_vtable, 0x004D6288");

struct challenge_layout {
    const void *vtable;
};

extern "C" void *ChallengeCtor(void *self)
    __asm__("__9Challenge");

void *ChallengeCtor(void *self)
{
    EventRecipientCtor(self);
    ((challenge_layout *)self)->vtable = challenge_vtable;
    return self;
}
#endif
