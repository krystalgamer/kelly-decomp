// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCC20)
// 0x001DCC20 Select__17SurferBioFrontEndi
class SurferBioFrontEnd {
public:
    void Select(int arg0);
};

void SurferBioFrontEnd::Select(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCC48)
// 0x001DCC48 OnLeft__17SurferBioFrontEndi
class SurferBioFrontEnd {
public:
    void OnLeft(int arg0);
};

void SurferBioFrontEnd::OnLeft(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCC50)
// 0x001DCC50 OnRight__17SurferBioFrontEndi
class SurferBioFrontEnd {
public:
    void OnRight(int arg0);
};

void SurferBioFrontEnd::OnRight(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCC58)
// 0x001DCC58 OnCross__17SurferBioFrontEndi
class SurferBioFrontEnd {
public:
    void OnCross(int arg0);
};

void SurferBioFrontEnd::OnCross(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCC28)
// 0x001DCC28 GetPointer__17SurferBioFrontEndPCc
class PanelQuad;
class PanelFile { public: PanelQuad *GetPointer(const char *name); };
__asm__(".equ GetPointer__9PanelFilePCc, 0x00152F88");
class SurferBioFrontEnd { char padding[0x100]; PanelFile panel; public: PanelQuad *GetPointer(const char *name); };
PanelQuad *SurferBioFrontEnd::GetPointer(const char *name) { PanelQuad *result = panel.GetPointer(name); KELLY_DECOMP_COMPILER_BARRIER(); return result; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCB88)
// 0x001DCB88 OnButtonRelease__14SurferFrontEndii
struct menu_vtable {
    char padding[0x100];
    short adjustment;
    short padding2;
    void (*on_button_release)(void *self, int controller, int button);
};

struct menu_layout {
    char padding[0x74];
    menu_vtable *vtable;
};

class SurferFrontEnd {
    char padding[0x60];
    menu_layout *active;

public:
    void OnButtonRelease(int controller, int button);
};

void SurferFrontEnd::OnButtonRelease(int controller, int button)
{
    menu_layout *menu = active;
    if (menu) {
        menu_vtable *table = menu->vtable;
        table->on_button_release(
            (char *)menu + table->adjustment,
            controller,
            button
        );
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCB30)
// 0x001DCB30 __tf14SurferFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCB30() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCB30[] __asm__("__ti14SurferFrontEnd");
extern const char name_001DCB30[];
extern void *base_type_001DCB30[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti14SurferFrontEnd, 0x005A2C78");
__asm__(".equ name_001DCB30, 0x004DDCE8");
__asm__(".equ base_type_001DCB30, 0x004DDC48");
extern "C" void **Rtti_001DCB30() __asm__("__tf14SurferFrontEnd");
void **Rtti_001DCB30()
{
    if (!type_001DCB30[0]) {
        BaseRtti_001DCB30();
        __rtti_class(type_001DCB30, name_001DCB30, base_type_001DCB30, 1);
    }
    return type_001DCB30;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCBC8)
// 0x001DCBC8 __tf17SurferBioFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCBC8() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCBC8[] __asm__("__ti17SurferBioFrontEnd");
extern const char name_001DCBC8[];
extern void *base_type_001DCBC8[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti17SurferBioFrontEnd, 0x005A2C88");
__asm__(".equ name_001DCBC8, 0x004DDD00");
__asm__(".equ base_type_001DCBC8, 0x004DDC48");
extern "C" void **Rtti_001DCBC8() __asm__("__tf17SurferBioFrontEnd");
void **Rtti_001DCBC8()
{
    if (!type_001DCBC8[0]) {
        BaseRtti_001DCBC8();
        __rtti_class(type_001DCBC8, name_001DCBC8, base_type_001DCBC8, 1);
    }
    return type_001DCBC8;
}
#endif
