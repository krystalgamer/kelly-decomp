// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00262668) || \
    defined(KELLY_DECOMP_FUNCTION_00262680) || \
    defined(KELLY_DECOMP_FUNCTION_00262698) || \
    defined(KELLY_DECOMP_FUNCTION_002626B0) || \
    defined(KELLY_DECOMP_FUNCTION_00262710) || \
    defined(KELLY_DECOMP_FUNCTION_00262748) || \
    defined(KELLY_DECOMP_FUNCTION_00262758) || \
    defined(KELLY_DECOMP_FUNCTION_00262788) || \
    defined(KELLY_DECOMP_FUNCTION_002627E8) || \
    defined(KELLY_DECOMP_FUNCTION_00262800) || \
    defined(KELLY_DECOMP_FUNCTION_00262818) || \
    defined(KELLY_DECOMP_FUNCTION_002628B8)
#include "KS/SRC/ks/challenge_photo_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_002626C8)
#include "KS/SRC/ks/challenge_photo_shared.h"
// 0x002626C8 _$_Q214PhotoChallenge5Photo
extern "C" void builtin_delete(void* pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void PhotoDtor(PhotoChallenge::Photo* self, int deleting)
    __asm__("_$_Q214PhotoChallenge5Photo");

void PhotoDtor(PhotoChallenge::Photo* self, int deleting)
{
    nglDestroyTexture(self->GetTexture());
    if (deleting & 1) {
        builtin_delete(self);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262518)
// 0x00262518 OnEvent__14PhotoChallenge5EVENTii
enum EVENT { EVT_SCORING_CHAIN_END = 7 };
class PhotoChallenge { char padding[0x14]; bool recordChain; public: void OnEvent(EVENT event, int param1, int param2); };
void PhotoChallenge::OnEvent(EVENT event, int param1, int param2) { if (event == EVT_SCORING_CHAIN_END) recordChain = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262668)
// 0x00262668 GetPhotoScore__C14PhotoChallengei
int* PhotoChallenge::GetPhotoScore(int index) const {
    return photos[index].GetScore();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262680)
// 0x00262680 GetPhotoTexture__14PhotoChallengei
nglTexture* PhotoChallenge::GetPhotoTexture(int index) { return photos[index].GetTexture(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262698)
// 0x00262698 GetPhotoIsOfSpecialTrick__14PhotoChallengei
bool PhotoChallenge::GetPhotoIsOfSpecialTrick(int index) { return photos[index].IsOfSpecialTrick(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002626B0)
// 0x002626B0 __Q214PhotoChallenge5Photo
PhotoChallenge::Photo::Photo() { texture = 0; score = 0; isOfSpecialTrick = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262748)
// 0x00262748 Reset__Q214PhotoChallenge5Photo
void PhotoChallenge::Photo::Reset() {
    score = 0;
    isOfSpecialTrick = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002627E8)
// 0x002627E8 __Q214PhotoChallenge9Cameraman
PhotoChallenge::Cameraman::Cameraman() {
    ent = 0;
    state = CSTATE_NONE;
    destPhoto = 0;
    targetKsctrl = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262800)
// 0x00262800 Init__Q214PhotoChallenge9CameramanP6entity
void PhotoChallenge::Cameraman::Init(entity* value) {
    ent = value;
    state = CSTATE_NONE;
    destPhoto = 0;
    targetKsctrl = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262818)
// 0x00262818 Reset__Q214PhotoChallenge9Cameraman
void PhotoChallenge::Cameraman::Reset() {
    state = CSTATE_NONE;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262758)
// 0x00262758 Show__Q214PhotoChallenge5Photoi
class IGOFrontEnd;

extern "C" void ShowPhoto(
    IGOFrontEnd *self,
    nglTexture *texture,
    int *score,
    int label
) __asm__("ShowPhoto__11IGOFrontEndP10nglTexturePii");
__asm__(".equ ShowPhoto__11IGOFrontEndP10nglTexturePii, 0x0017CE88");

extern IGOFrontEnd *global_igo;
__asm__(".equ global_igo, 0x003E7728");

void PhotoChallenge::Photo::Show(int label) {
    ShowPhoto(global_igo, texture, &score, label);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262710)
// 0x00262710 Init__Q214PhotoChallenge5Photoii
nglTexture *nglCreateTexture(
    unsigned int format,
    unsigned int width,
    unsigned int height
);
__asm__(".equ nglCreateTexture__FUiUiUi, 0x0039CB38");

void PhotoChallenge::Photo::Init(int width, int height)
{
    texture = nglCreateTexture(1, width, height);
    score = 0;
    isOfSpecialTrick = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002628B8)
// 0x002628B8 BeginTakingPicture__Q214PhotoChallenge9CameramanP22kellyslater_controllerPQ214PhotoChallenge5Photo
struct IGOFrontEnd { void ShowCameraReticle(float time); };
extern IGOFrontEnd *frontend_igo;
__asm__(".equ frontend_igo, 0x003E7728");
__asm__(".equ ShowCameraReticle__11IGOFrontEndf, 0x0017CE18");
void PhotoChallenge::Cameraman::BeginTakingPicture(
    kellyslater_controller *target,Photo *photo
) {
    frontend_igo->ShowCameraReticle(5.0f);
    destPhoto=photo;
    targetKsctrl=target;
    state=CSTATE_TAKING;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262788)
// 0x00262788 CheckProperties__Q214PhotoChallenge5PhotoP22kellyslater_controller
struct trick_data { char padding[0xc]; int flags; char tail[0x48]; };
extern trick_data GTrickList[];
__asm__(".equ GTrickList, 0x00427CA8");
__asm__(".equ GetCurrentTrick__22kellyslater_controller, 0x0021E478");
void PhotoChallenge::Photo::CheckProperties(
    kellyslater_controller *subject
) {
    isOfSpecialTrick=false;
    if (subject) {
        int trick=subject->GetCurrentTrick();
        if (trick>=0 && (GTrickList[trick].flags&0x80))
            isOfSpecialTrick=true;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00261C78)
// 0x00261C78 __14PhotoChallenge
extern "C" void challenge_ctor(void*) __asm__("__9Challenge"); __asm__(".equ __9Challenge,0x00260860"); extern const char photo_vtable[]; __asm__(".equ photo_vtable,0x004D5EA0");
class PhotoChallenge { const void*vtable; void*ksctrl; int goal,requiredScore,state,recordChain; float specialPhotoTimer; int numCameramen; void*cameramen; int activeCameramanIdx,numTaken,numPhotos; void*photos; public:PhotoChallenge(); };
PhotoChallenge::PhotoChallenge()
{challenge_ctor(this);register int none __asm__("$2")=-1;register const void*table __asm__("$3")=photo_vtable;activeCameramanIdx=none;vtable=table;ksctrl=0;goal=0;requiredScore=0;state=0;recordChain=false;specialPhotoTimer=0.0f;numCameramen=0;cameramen=0;numTaken=0;numPhotos=0;photos=0;}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002620A8)
// 0x002620A8 Retry__14PhotoChallenge
class PhotoChallenge{public:class Cameraman{char data[16];public:void Reset();};class Photo{char data[12];public:void Reset();};char pad0[16];int state;int recordChain;float specialPhotoTimer;int numCameramen;Cameraman*cameramen;int activeCameramanIdx;int numTaken;int numPhotos;Photo*photos;void Retry();};asm(".equ Reset__Q214PhotoChallenge9Cameraman,0x00262818");asm(".equ Reset__Q214PhotoChallenge5Photo,0x00262748");void PhotoChallenge::Retry(){int i=0;state=0;recordChain=false;specialPhotoTimer=0.0f;activeCameramanIdx=-1;for(i=0;i<numCameramen;i++)cameramen[i].Reset();numTaken=0;for(i=0;i<numPhotos;i++)photos[i].Reset();}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262918)
// 0x00262918 IsCloseToSurfer__CQ214PhotoChallenge9CameramanP22kellyslater_controller
#include "KS/SRC/ks/challenge_photo_shared.h"

#define TAKE_RANGE2 1225.0f

bool PhotoChallenge::Cameraman::IsCloseToSurfer(
    kellyslater_controller *ksctrl) const
{
    float dist2 = 0.0f;

    if (ksctrl && ent && ent->is_active() && ent->is_visible())
    {
        dist2 = (
            ent->get_abs_position() -
            ksctrl->get_board_controller().my_board->get_abs_position()
        ).length2();

        if (dist2 <= TAKE_RANGE2)
            return true;
    }
    return false;
}
#endif
