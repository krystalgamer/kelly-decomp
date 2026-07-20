// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DE430)
// 0x001DE430 Draw__18ControllerFrontEnd
class ControllerFrontEnd {
public:
    void Draw();
};

void ControllerFrontEnd::Draw() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE438)
// 0x001DE438 OnLeft__18ControllerFrontEndi
class ControllerFrontEnd {
public:
    void OnLeft(int arg0);
};

void ControllerFrontEnd::OnLeft(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE440)
// 0x001DE440 OnRight__18ControllerFrontEndi
class ControllerFrontEnd {
public:
    void OnRight(int arg0);
};

void ControllerFrontEnd::OnRight(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE448)
// 0x001DE448 OnUp__18ControllerFrontEndi
class ControllerFrontEnd {
public:
    void OnUp(int arg0);
};

void ControllerFrontEnd::OnUp(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE450)
// 0x001DE450 OnDown__18ControllerFrontEndi
class ControllerFrontEnd {
public:
    void OnDown(int arg0);
};

void ControllerFrontEnd::OnDown(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE458)
// 0x001DE458 Select__18ControllerFrontEndi
class ControllerFrontEnd {
public:
    void Select(int arg0);
};

void ControllerFrontEnd::Select(int arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE4D8)
// 0x001DE4D8 Update__9HelpbarFEf
class HelpbarFE {
public:
    void Update(float arg0);
};

void HelpbarFE::Update(float arg0) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE5B0)
// 0x001DE5B0 Reload__19GraphicalMenuSystem
class GraphicalMenuSystem {
public:
    void Reload();
};

void GraphicalMenuSystem::Reload() {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE210)
// 0x001DE210 _$_11FEDebugMenu
extern "C" void FEMenuDtor(void *self) __asm__("_$_6FEMenu");
extern "C" void FEDebugMenuDtor(void *self) __asm__("_$_11FEDebugMenu");
__asm__(".equ _$_6FEMenu, 0x00156580");
void FEDebugMenuDtor(void *self) { FEMenuDtor(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE4E0)
// 0x001DE4E0 ReloadPanel__9HelpbarFE
class PanelFile { public: void Reload(); };
__asm__(".equ Reload__9PanelFile, 0x00152838");
class HelpbarFE { char padding[0x80]; PanelFile panel; public: void ReloadPanel(); };
void HelpbarFE::ReloadPanel() { panel.Reload(); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE2E0)
// 0x001DE2E0 OnStart__13LegalFrontEndi
struct frontend_vtable { char padding[0x128]; short adjustment; short padding2; void (*call)(void *, void *); };
class LegalFrontEnd { char padding[0x74]; frontend_vtable *vtable; public: void OnStart(int controller); };
void LegalFrontEnd::OnStart(int controller) { frontend_vtable *table = vtable; table->call((char *)this + table->adjustment, 0); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DE310)
// 0x001DE310 OnCross__13LegalFrontEndi
struct frontend_vtable { char padding[0x128]; short adjustment; short padding2; void (*call)(void *, void *); };
class LegalFrontEnd { char padding[0x74]; frontend_vtable *vtable; public: void OnCross(int controller); };
void LegalFrontEnd::OnCross(int controller) { frontend_vtable *table = vtable; table->call((char *)this + table->adjustment, 0); }
#endif
