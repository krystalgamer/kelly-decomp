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

#if defined(KELLY_DECOMP_FUNCTION_00187A40)
// 0x00187A40 getName__14SurferFrontEndi
#include "KS/SRC/stringx.h"
struct SurferData {
    char padding[0x16c];
    char name[0x120];
};
extern SurferData SurferDataArray[];
__asm__(".equ SurferDataArray, 0x004254E0");
extern "C" void construct_string(
    stringx *result,const char *text,int length
) __asm__("__7stringxPCci");
extern "C" void copy_string(
    stringx *result,const stringx *source
) __asm__("__7stringxRC7stringx");
extern "C" void destroy_string(
    stringx *value,int flags
) __asm__("_$_7stringx");
extern "C" stringx *get_surfer_name(
    stringx *result,int index
) __asm__("getName__14SurferFrontEndi");
__asm__(".equ __7stringxPCci, 0x0034D438");
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
stringx *get_surfer_name(stringx *result,int index) {
    char storage[8] __attribute__((aligned(16)));
    stringx *tmp=(stringx *)storage;
    construct_string(tmp,SurferDataArray[index].name,-1);
    register const stringx *source __asm__("$5")=tmp;
    __asm__ __volatile__("" : "+r"(source));
    copy_string(result,source);
    destroy_string(tmp,2);
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00187AA0)
// 0x00187AA0 getAbbr__14SurferFrontEndi
#include "KS/SRC/stringx.h"
struct SurferData {
    char padding[0x21c];
    char abbr[0x70];
};
extern SurferData SurferDataArray[];
__asm__(".equ SurferDataArray, 0x004254E0");
extern "C" void construct_string(stringx *,const char *,int)
    __asm__("__7stringxPCci");
extern "C" void copy_string(stringx *,const stringx *)
    __asm__("__7stringxRC7stringx");
extern "C" void destroy_string(stringx *,int)
    __asm__("_$_7stringx");
extern "C" stringx *get_surfer_abbr(stringx *,int)
    __asm__("getAbbr__14SurferFrontEndi");
__asm__(".equ __7stringxPCci, 0x0034D438");
__asm__(".equ __7stringxRC7stringx, 0x0034D4D0");
__asm__(".equ _$_7stringx, 0x0034D6E0");
stringx *get_surfer_abbr(stringx *result,int index) {
    char storage[8] __attribute__((aligned(16)));
    stringx *tmp=(stringx *)storage;
    construct_string(tmp,SurferDataArray[index].abbr,-1);
    register const stringx *source __asm__("$5")=tmp;
    __asm__ __volatile__("" : "+r"(source));
    copy_string(result,source);
    destroy_string(tmp,2);
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00189800)
// 0x00189800 OnAnyButtonPress__14SurferFrontEndii
struct entity_manager {
    char padding[0x1c0]; int camera_moving;
};
struct manager_layout { char padding[0xc]; entity_manager *em; };
extern "C" void jump_to(entity_manager *,int)
    __asm__("JumpTo__15FEEntityManageri");
__asm__(".equ JumpTo__15FEEntityManageri, 0x001C4C88");
class SurferFrontEnd {
    char padding[0x2c0]; manager_layout *manager;
    char padding2[0x14]; int in_tb_or_bio;
public:
    void OnAnyButtonPress(int controller,int button);
};
void SurferFrontEnd::OnAnyButtonPress(int,int button) {
    int moving=manager->em->camera_moving^1;
    if (!moving) return;
    if (button!=6 && button!=7) {
        if (in_tb_or_bio) jump_to(manager->em,2);
        else jump_to(manager->em,1);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00189A80)
// 0x00189A80 checkHigh__14SurferFrontEndb
struct surfer{char p0[76];void*highlighted;char p1[408];void*Bio,*Trick,*Personality,*Continue,*ScrapBook,*Handicap;};extern "C" void set_state(surfer*,int) __asm__("SetState__14SurferFrontEndi");__asm__(".equ SetState__14SurferFrontEndi,0x00188A38");extern "C" void check(surfer*self,bool set) __asm__("checkHigh__14SurferFrontEndb");void check(surfer*self,bool set){if(set)set_state(self,(self->highlighted==self->Bio)?1:(self->highlighted==self->Trick)?2:(self->highlighted==self->Personality)?3:(self->highlighted==self->ScrapBook)?4:(self->highlighted==self->Continue)?5:(self->highlighted==self->Handicap)?6:0 );int dead;__asm__("" : "=r"(dead));}
#endif
