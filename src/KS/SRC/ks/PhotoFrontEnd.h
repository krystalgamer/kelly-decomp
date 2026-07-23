// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDEC0)
// 0x001DDEC0 __tf13PhotoFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDEC0() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDEC0[] __asm__("__ti13PhotoFrontEnd");
extern const char name_001DDEC0[]; extern void *base_type_001DDEC0[];
__asm__(".equ __rtti_class, 0x003CE2B0"); __asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13PhotoFrontEnd, 0x005A2E98"); __asm__(".equ name_001DDEC0, 0x004DDFF0"); __asm__(".equ base_type_001DDEC0, 0x004DDC48");
extern "C" void **Rtti_001DDEC0() __asm__("__tf13PhotoFrontEnd");
void **Rtti_001DDEC0() { if (!type_001DDEC0[0]) { BaseRtti_001DDEC0(); __rtti_class(type_001DDEC0, name_001DDEC0, base_type_001DDEC0, 1); } return type_001DDEC0; }
#endif
