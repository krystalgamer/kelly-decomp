// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCCD8)
// 0x001DCCD8 OnUnactivate__13BeachFrontEnd
class BeachFrontEnd {
    char padding[0xF20];
    bool exitingWithoutSelect;
public:
    void OnUnactivate();
};

void BeachFrontEnd::OnUnactivate() {
    exitingWithoutSelect = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCCB8)
// 0x001DCCB8 ReloadMap__13BeachFrontEnd
class PanelQuad;
class MapData { public: void Reload(PanelQuad *path); };
__asm__(".equ Reload__7MapDataP9PanelQuad, 0x0018B5C0");
class BeachFrontEnd { char padding0[0xe94]; PanelQuad *path_pq; char padding1[0x4c]; MapData map; public: void ReloadMap(); };
void BeachFrontEnd::ReloadMap() { map.Reload(path_pq); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
