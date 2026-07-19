// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002B93F0)
// 0x002B93F0 is_a_sky__C3sky
class sky {
public:
    bool is_a_sky() const;
};

bool sky::is_a_sky() const {
    return true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002B9378)
// 0x002B9378 _$_3sky
extern "C" void EntityDtor(void *self) __asm__("_$_6entity");
extern "C" void SkyDtor(void *self) __asm__("_$_3sky");
__asm__(".equ _$_6entity, 0x001298C8");
void SkyDtor(void *self) { EntityDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
