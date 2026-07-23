// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DE0E8)
// 0x001DE0E8 __tf16MCDetectFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base); extern "C" void **BaseRtti_001DE0E8() __asm__("__tf11FEMultiMenu"); extern "C" void *type_001DE0E8[] __asm__("__ti16MCDetectFrontEnd"); extern const char name_001DE0E8[]; extern void *base_type_001DE0E8[]; __asm__(".equ __rtti_class, 0x003CE2B0"); __asm__(".equ __tf11FEMultiMenu, 0x001D8138"); __asm__(".equ __ti16MCDetectFrontEnd, 0x005A2EF8"); __asm__(".equ name_001DE0E8, 0x004DE070"); __asm__(".equ base_type_001DE0E8, 0x004DDC48"); extern "C" void **Rtti_001DE0E8() __asm__("__tf16MCDetectFrontEnd"); void **Rtti_001DE0E8() { if (!type_001DE0E8[0]) { BaseRtti_001DE0E8(); __rtti_class(type_001DE0E8, name_001DE0E8, base_type_001DE0E8, 1); } return type_001DE0E8; }
#endif
