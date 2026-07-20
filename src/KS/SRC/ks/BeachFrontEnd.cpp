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

#if defined(KELLY_DECOMP_FUNCTION_0018F6C0)
// 0x0018F6C0 ReturnToFE__13BeachFrontEnd
struct FEManagerLayout { char padding[0x15684]; bool return_to_fe; };
extern FEManagerLayout frontendmanager;
__asm__(".equ frontendmanager, 0x003E7728");
struct PauseMenuSystem { char padding[0x98]; bool prepare_to_end; };
class BeachFrontEnd { char padding[0x50]; PauseMenuSystem *system; public: void ReturnToFE(); };
void BeachFrontEnd::ReturnToFE() { frontendmanager.return_to_fe = true; system->prepare_to_end = true; }
#endif
