// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0018F548)
// 0x0018F548 OnLevelEnding__13BeachFrontEnd
class BeachFrontEnd {
    char padding[0xF18];
    bool sliding_in;
public:
    void OnLevelEnding();
};

void BeachFrontEnd::OnLevelEnding() {
    sliding_in = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0018EE50)
// 0x0018EE50 SkipSlide__13BeachFrontEndb
class PanelFile { public: void ForceDoneSlide(bool value); };
__asm__(".equ ForceDoneSlide__9PanelFileb, 0x00153118");
class BeachFrontEnd { char padding[0x100]; PanelFile panel; public: void SkipSlide(bool value); };
void BeachFrontEnd::SkipSlide(bool value) { panel.ForceDoneSlide(value); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
