// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCEE8)
// 0x001DCEE8 OnCross__17TrickBookFrontEndi
class FEMenu { public: void OnCross(int command); };
__asm__(".equ OnCross__6FEMenui, 0x00157860");
class TrickBookFrontEnd : public FEMenu { public: void OnCross(int command); };
void TrickBookFrontEnd::OnCross(int command) { FEMenu::OnCross(command); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCE90)
// 0x001DCE90 __tf17TrickBookFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCE90() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCE90[] __asm__("__ti17TrickBookFrontEnd");
extern const char name_001DCE90[];
extern void *base_type_001DCE90[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti17TrickBookFrontEnd, 0x005A2CE8");
__asm__(".equ name_001DCE90, 0x004DDD70");
__asm__(".equ base_type_001DCE90, 0x004DDC48");
extern "C" void **Rtti_001DCE90() __asm__("__tf17TrickBookFrontEnd");
void **Rtti_001DCE90()
{
    if (!type_001DCE90[0]) {
        BaseRtti_001DCE90();
        __rtti_class(type_001DCE90, name_001DCE90, base_type_001DCE90, 1);
    }
    return type_001DCE90;
}
#endif
