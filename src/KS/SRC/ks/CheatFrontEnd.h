// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDC80)
// 0x001DDC80 OnCross__14EnterCheatMenui
struct MenuVTable { char padding[0x158]; short adjustment; short padding2; void (*call)(void *self); };
class EnterCheatMenu { char padding[0x74]; MenuVTable *vtable; public: void OnCross(int command); };
void EnterCheatMenu::OnCross(int command) { MenuVTable *table = vtable; table->call((char *)this + table->adjustment); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDB10)
// 0x001DDB10 __tf13CheatFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDB10() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDB10[] __asm__("__ti13CheatFrontEnd");
extern const char name_001DDB10[];
extern void *base_type_001DDB10[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13CheatFrontEnd, 0x005A2E48");
__asm__(".equ name_001DDB10, 0x004DDF88");
__asm__(".equ base_type_001DDB10, 0x004DDC48");
extern "C" void **Rtti_001DDB10() __asm__("__tf13CheatFrontEnd");
void **Rtti_001DDB10() { if (!type_001DDB10[0]) { BaseRtti_001DDB10(); __rtti_class(type_001DDB10, name_001DDB10, base_type_001DDB10, 1); } return type_001DDB10; }
#endif
