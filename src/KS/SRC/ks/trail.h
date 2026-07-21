// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00383D70)
// 0x00383D70 __tf5trail
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *trail_type[] __asm__("__ti5trail");
extern "C" char trail_name[];
__asm__(".equ __ti5trail, 0x00512208");
__asm__(".equ trail_name, 0x0051A9C8");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **trail_rtti() __asm__("__tf5trail");
void **trail_rtti()
{
    if (!trail_type[0])
        __rtti_user(trail_type, trail_name);
    return trail_type;
}
#endif
