// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCDF0)
// 0x001DCDF0 OnTriangle__10DialogMenui
class DialogMenu {
public:
    void OnTriangle(int arg0);
};

void DialogMenu::OnTriangle(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCDF8)
// 0x001DCDF8 OnUnactivate__10DialogMenuP6FEMenu
class FEMenu;
class DialogMenu { public: void TurnPQ(bool value); void OnUnactivate(FEMenu *menu); };
__asm__(".equ TurnPQ__10DialogMenub, 0x0019DA00");
void DialogMenu::OnUnactivate(FEMenu *menu) { TurnPQ(false); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCE70)
// 0x001DCE70 OnTriangle__12KeyboardMenui
class KeyboardMenu { public: void go_to_previous_menu(); void OnTriangle(int command); };
__asm__(".equ go_to_previous_menu__12KeyboardMenu, 0x001A2420");
void KeyboardMenu::OnTriangle(int command) { go_to_previous_menu(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCCE8)
// 0x001DCCE8 __tf16SaveLoadFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCCE8() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCCE8[] __asm__("__ti16SaveLoadFrontEnd");
extern const char name_001DCCE8[];
extern void *base_type_001DCCE8[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti16SaveLoadFrontEnd, 0x005A2CA8");
__asm__(".equ name_001DCCE8, 0x004DDD28");
__asm__(".equ base_type_001DCCE8, 0x004DDC48");
extern "C" void **Rtti_001DCCE8() __asm__("__tf16SaveLoadFrontEnd");
void **Rtti_001DCCE8()
{
    if (!type_001DCCE8[0]) {
        BaseRtti_001DCCE8();
        __rtti_class(type_001DCCE8, name_001DCCE8, base_type_001DCCE8, 1);
    }
    return type_001DCCE8;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCD40)
// 0x001DCD40 __tf9NamesMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCD40() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCD40[] __asm__("__ti9NamesMenu");
extern const char name_001DCD40[];
extern void *base_type_001DCD40[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti9NamesMenu, 0x005A2CB8");
__asm__(".equ name_001DCD40, 0x004DDD40");
__asm__(".equ base_type_001DCD40, 0x004DDC48");
extern "C" void **Rtti_001DCD40() __asm__("__tf9NamesMenu");
void **Rtti_001DCD40()
{
    if (!type_001DCD40[0]) {
        BaseRtti_001DCD40();
        __rtti_class(type_001DCD40, name_001DCD40, base_type_001DCD40, 1);
    }
    return type_001DCD40;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCD98)
// 0x001DCD98 __tf10DialogMenu
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCD98() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCD98[] __asm__("__ti10DialogMenu");
extern const char name_001DCD98[];
extern void *base_type_001DCD98[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti10DialogMenu, 0x005A2CC8");
__asm__(".equ name_001DCD98, 0x004DDD50");
__asm__(".equ base_type_001DCD98, 0x004DDC48");
extern "C" void **Rtti_001DCD98() __asm__("__tf10DialogMenu");
void **Rtti_001DCD98()
{
    if (!type_001DCD98[0]) {
        BaseRtti_001DCD98();
        __rtti_class(type_001DCD98, name_001DCD98, base_type_001DCD98, 1);
    }
    return type_001DCD98;
}
#endif
