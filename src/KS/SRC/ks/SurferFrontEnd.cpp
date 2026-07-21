// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0018A370)
// 0x0018A370 OnUp__17SurferBioFrontEndi
class SurferBioFrontEnd { char padding[0x1EC]; bool up_pressed; bool down_pressed; int bio_counter; public: void OnUp(int controller); };
void SurferBioFrontEnd::OnUp(int controller) { up_pressed = true; bio_counter = 3; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0018A388)
// 0x0018A388 OnDown__17SurferBioFrontEndi
class SurferBioFrontEnd { char padding[0x1EC]; bool up_pressed; bool down_pressed; int bio_counter; public: void OnDown(int controller); };
void SurferBioFrontEnd::OnDown(int controller) { down_pressed = true; bio_counter = 3; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0018AAF0)
// 0x0018AAF0 OnButtonRelease__17SurferBioFrontEndii
class SurferBioFrontEnd { char padding[0x1ec]; bool up_pressed; bool down_pressed; public: void OnButtonRelease(int controller, int button); };
void SurferBioFrontEnd::OnButtonRelease(int controller, int button) { if (button == 2) up_pressed = false; else if (button == 3) down_pressed = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00189270)
// 0x00189270 AdjustHandicap__14SurferFrontEndb
// Matching-only empty barrier preserves the released non-tail call shape.
#include "decomp_annotations.h"

class SurferFrontEnd {
    char padding[0x2c8];
    int hcap;

public:
    void AdjustHandicap(bool left);
    void AdjustHandicapAbso(int absolute);
};

__asm__(".equ AdjustHandicapAbso__14SurferFrontEndi, 0x001892A8");

void SurferFrontEnd::AdjustHandicap(bool left)
{
    if(left) {
        AdjustHandicapAbso(hcap-1);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
    else {
        AdjustHandicapAbso(hcap+1);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif
