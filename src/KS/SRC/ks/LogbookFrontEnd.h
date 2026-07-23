// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DE208)
// 0x001DE208 Select__15LogbookFrontEndi
class LogbookFrontEnd {
public:
    void Select(int arg0);
};

void LogbookFrontEnd::Select(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE1B0)
// 0x001DE1B0 __tf15LogbookFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base); extern "C" void **BaseRtti_001DE1B0() __asm__("__tf11FEMultiMenu"); extern "C" void *type_001DE1B0[] __asm__("__ti15LogbookFrontEnd"); extern const char name_001DE1B0[]; extern void *base_type_001DE1B0[]; __asm__(".equ __rtti_class, 0x003CE2B0"); __asm__(".equ __tf11FEMultiMenu, 0x001D8138"); __asm__(".equ __ti15LogbookFrontEnd, 0x005A2F18"); __asm__(".equ name_001DE1B0, 0x004DE098"); __asm__(".equ base_type_001DE1B0, 0x004DDC48"); extern "C" void **Rtti_001DE1B0() __asm__("__tf15LogbookFrontEnd"); void **Rtti_001DE1B0() { if (!type_001DE1B0[0]) { BaseRtti_001DE1B0(); __rtti_class(type_001DE1B0, name_001DE1B0, base_type_001DE1B0, 1); } return type_001DE1B0; }
#endif
