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
PanelQuad *SurferBioFrontEnd::GetPointer(const char *name) { PanelQuad *result = panel.GetPointer(name); __asm__ volatile(""); return result; }
#endif
