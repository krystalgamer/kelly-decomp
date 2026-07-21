// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0035FE90)
// 0x0035FE90 __tf14EventRecipient
extern "C" void __rtti_user(void **type, const char *name);
extern "C" void *rtti_0035FE90_type[] __asm__("__ti14EventRecipient");
extern "C" char rtti_0035FE90_name[] __asm__("rtti_0035FE90_type_name");
__asm__(".equ __ti14EventRecipient, 0x005120A8");
__asm__(".equ rtti_0035FE90_type_name, 0x00505710");
__asm__(".equ __rtti_user, 0x003CE2F8");
extern "C" void **rtti_0035FE90() __asm__("__tf14EventRecipient");
void **rtti_0035FE90()
{
    if (!rtti_0035FE90_type[0])
        __rtti_user(rtti_0035FE90_type, rtti_0035FE90_name);
    return rtti_0035FE90_type;
}
#endif
