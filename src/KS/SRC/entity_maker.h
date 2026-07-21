// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_003131D0)
// 0x003131D0 __tf12entity_maker
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *entity_maker_type[] __asm__("__ti12entity_maker");
extern "C" char entity_maker_name[] __asm__("__tn12entity_maker");
__asm__(".equ __ti12entity_maker, 0x005121A0");
__asm__(".equ __tn12entity_maker, 0x00508888");
__asm__(".equ __rtti_user, 0x003CE2F8");

extern "C" void **entity_maker_rtti() __asm__("__tf12entity_maker");
void **entity_maker_rtti()
{
    if (!entity_maker_type[0])
        __rtti_user(entity_maker_type, entity_maker_name);
    return entity_maker_type;
}
#endif
