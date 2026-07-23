// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDB00)
// 0x001DDB00 OnUp__13BoardFrontEndi
class BoardFrontEnd {
public:
    void OnUp(int arg0);
};

void BoardFrontEnd::OnUp(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDB08)
// 0x001DDB08 OnDown__13BoardFrontEndi
class BoardFrontEnd {
public:
    void OnDown(int arg0);
};

void BoardFrontEnd::OnDown(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDAD8)
// 0x001DDAD8 Select__13BoardFrontEndi
struct MenuVTable { char padding[0x158]; short adjustment; short padding2; void (*call)(void *self); };
class BoardFrontEnd { char padding[0x74]; MenuVTable *vtable; public: void Select(int entry); };
void BoardFrontEnd::Select(int entry) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDA80)
// 0x001DDA80 __tf13BoardFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDA80() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDA80[] __asm__("__ti13BoardFrontEnd");
extern const char name_001DDA80[];
extern void *base_type_001DDA80[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13BoardFrontEnd, 0x005A2E38");
__asm__(".equ name_001DDA80, 0x004DDF78");
__asm__(".equ base_type_001DDA80, 0x004DDC48");
extern "C" void **Rtti_001DDA80() __asm__("__tf13BoardFrontEnd");
void **Rtti_001DDA80()
{
    if (!type_001DDA80[0]) {
        BaseRtti_001DDA80();
        __rtti_class(type_001DDA80, name_001DDA80, base_type_001DDA80, 1);
    }
    return type_001DDA80;
}
#endif
