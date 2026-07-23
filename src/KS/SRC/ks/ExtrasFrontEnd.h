// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DDE88)
// 0x001DDE88 Select__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void Select(int arg0);
};

void CreditsFrontEnd::Select(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDE90)
// 0x001DDE90 OnUp__15CreditsFrontEndi
class CreditsFrontEnd {
    char padding[0x170];
    bool up_pressed;
public:
    void OnUp(int controller);
};

void CreditsFrontEnd::OnUp(int controller) {
    up_pressed = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEA0)
// 0x001DDEA0 OnDown__15CreditsFrontEndi
class CreditsFrontEnd {
    char padding[0x174];
    bool down_pressed;
public:
    void OnDown(int controller);
};

void CreditsFrontEnd::OnDown(int controller) {
    down_pressed = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEB0)
// 0x001DDEB0 OnRight__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void OnRight(int arg0);
};

void CreditsFrontEnd::OnRight(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDEB8)
// 0x001DDEB8 OnLeft__15CreditsFrontEndi
class CreditsFrontEnd {
public:
    void OnLeft(int arg0);
};

void CreditsFrontEnd::OnLeft(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DDCA8)
// 0x001DDCA8 __tf14ExtrasFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DDCA8() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DDCA8[] __asm__("__ti14ExtrasFrontEnd");
extern const char name_001DDCA8[];
extern void *base_type_001DDCA8[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti14ExtrasFrontEnd, 0x005A2E78");
__asm__(".equ name_001DDCA8, 0x004DDFC0");
__asm__(".equ base_type_001DDCA8, 0x004DDC48");
extern "C" void **Rtti_001DDCA8() __asm__("__tf14ExtrasFrontEnd");
void **Rtti_001DDCA8() { if (!type_001DDCA8[0]) { BaseRtti_001DDCA8(); __rtti_class(type_001DDCA8, name_001DDCA8, base_type_001DDCA8, 1); } return type_001DDCA8; }
#endif
