// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DE020)
// 0x001DE020 __tf16TutorialFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DE020() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DE020[] __asm__("__ti16TutorialFrontEnd");
extern const char name_001DE020[]; extern void *base_type_001DE020[];
__asm__(".equ __rtti_class, 0x003CE2B0"); __asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti16TutorialFrontEnd, 0x005A2ED8"); __asm__(".equ name_001DE020, 0x004DE040"); __asm__(".equ base_type_001DE020, 0x004DDC48");
extern "C" void **Rtti_001DE020() __asm__("__tf16TutorialFrontEnd");
void **Rtti_001DE020() { if (!type_001DE020[0]) { BaseRtti_001DE020(); __rtti_class(type_001DE020, name_001DE020, base_type_001DE020, 1); } return type_001DE020; }
#endif
