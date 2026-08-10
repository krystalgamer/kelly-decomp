// Matching decompilation blocks selected by generated build shims.

// 0x002626C8 _$_Q214PhotoChallenge5Photo
#include "KS/SRC/ks/challenge_photo.h"
extern "C" void builtin_delete(void* pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void PhotoDtor(PhotoChallenge::Photo* self, int deleting)
    __asm__("_$_Q214PhotoChallenge5Photo");

void PhotoDtor(PhotoChallenge::Photo* self, int deleting)
{
    nglDestroyTexture(self->GetTexture());
    if (deleting & 1) {
        void (*delete_photo)(void *) = builtin_delete;
        delete_photo(self);
    }
}

// 0x00262518 OnEvent__14PhotoChallenge5EVENTii
#include "KS/SRC/ks/challenge_photo.h"

void PhotoChallenge::OnEvent(
    EVENT event,
    int param1,
    int param2
) {
    if (event == EVT_SCORING_CHAIN_END)
        recordChain = false;
}

// 0x00262668 GetPhotoScore__C14PhotoChallengei
#include "KS/SRC/ks/challenge_photo.h"
int* PhotoChallenge::GetPhotoScore(int index) const {
    return photos[index].GetScore();
}

// 0x00262680 GetPhotoTexture__14PhotoChallengei
#include "KS/SRC/ks/challenge_photo.h"
nglTexture* PhotoChallenge::GetPhotoTexture(int index) { return photos[index].GetTexture(); }

// 0x00262698 GetPhotoIsOfSpecialTrick__14PhotoChallengei
#include "KS/SRC/ks/challenge_photo.h"
bool PhotoChallenge::GetPhotoIsOfSpecialTrick(int index) { return photos[index].IsOfSpecialTrick(); }

// 0x002626B0 __Q214PhotoChallenge5Photo
#include "KS/SRC/ks/challenge_photo.h"
PhotoChallenge::Photo::Photo() { texture = 0; score = 0; isOfSpecialTrick = false; }

// 0x00262748 Reset__Q214PhotoChallenge5Photo
#include "KS/SRC/ks/challenge_photo.h"
void PhotoChallenge::Photo::Reset() {
    score = 0;
    isOfSpecialTrick = false;
}

// 0x002627E8 __Q214PhotoChallenge9Cameraman
#include "KS/SRC/ks/challenge_photo.h"
PhotoChallenge::Cameraman::Cameraman() {
    ent = 0;
    state = CSTATE_NONE;
    destPhoto = 0;
    targetKsctrl = 0;
}

// 0x00262800 Init__Q214PhotoChallenge9CameramanP6entity
#include "KS/SRC/ks/challenge_photo.h"
void PhotoChallenge::Cameraman::Init(entity* value) {
    ent = value;
    state = CSTATE_NONE;
    destPhoto = 0;
    targetKsctrl = 0;
}

// 0x00262818 Reset__Q214PhotoChallenge9Cameraman
#include "KS/SRC/ks/challenge_photo.h"
void PhotoChallenge::Cameraman::Reset() {
    state = CSTATE_NONE;
}

// 0x00262758 Show__Q214PhotoChallenge5Photoi
#include "KS/SRC/ks/challenge_photo.h"
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
    void (*show_photo)(
        IGOFrontEnd *, nglTexture *, int *, int) = ShowPhoto;
    show_photo(global_igo, texture, &score, label);
}

// 0x00262710 Init__Q214PhotoChallenge5Photoii
#include "KS/SRC/ks/challenge_photo.h"
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

// 0x002628B8 BeginTakingPicture__Q214PhotoChallenge9CameramanP22kellyslater_controllerPQ214PhotoChallenge5Photo
#include "KS/SRC/ks/challenge_photo.h"
#include "KS/SRC/ks/IGOFrontEnd.h"

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

// 0x00261C78 __14PhotoChallenge
extern "C" void challenge_ctor(void*) __asm__("__9Challenge"); __asm__(".equ __9Challenge,0x00260860"); extern const char photo_vtable[]; __asm__(".equ photo_vtable,0x004D5EA0");
struct photo_challenge_ctor_layout {
    const void *vtable;
    void *ksctrl;
    int goal;
    int requiredScore;
    int state;
    int recordChain;
    float specialPhotoTimer;
    int numCameramen;
    void *cameramen;
    int activeCameramanIdx;
    int numTaken;
    int numPhotos;
    void *photos;
};
extern "C" photo_challenge_ctor_layout *photo_challenge_ctor(
    photo_challenge_ctor_layout *self
)
    __asm__("__14PhotoChallenge");
photo_challenge_ctor_layout *photo_challenge_ctor(
    photo_challenge_ctor_layout *self
)
{
    challenge_ctor(self);
    register int none __asm__("$2") = -1;
    register const void *table __asm__("$3") = photo_vtable;
    self->activeCameramanIdx = none;
    self->vtable = table;
    self->ksctrl = 0;
    self->goal = 0;
    self->requiredScore = 0;
    self->state = 0;
    self->recordChain = false;
    self->specialPhotoTimer = 0.0f;
    self->numCameramen = 0;
    self->cameramen = 0;
    self->numTaken = 0;
    self->numPhotos = 0;
    self->photos = 0;
    return self;
}

// 0x002620A8 Retry__14PhotoChallenge
struct photo_cameraman_layout { char data[16]; };
struct photo_layout { char data[12]; };
struct photo_challenge_retry_layout {
    char padding[16];
    int state;
    int recordChain;
    float specialPhotoTimer;
    int numCameramen;
    photo_cameraman_layout *cameramen;
    int activeCameramanIdx;
    int numTaken;
    int numPhotos;
    photo_layout *photos;
};
extern "C" void reset_cameraman(void *self)
    __asm__("Reset__Q214PhotoChallenge9Cameraman");
extern "C" void reset_photo(void *self)
    __asm__("Reset__Q214PhotoChallenge5Photo");
extern "C" void retry_photo_challenge(photo_challenge_retry_layout *self)
    __asm__("Retry__14PhotoChallenge");
asm(".equ Reset__Q214PhotoChallenge9Cameraman,0x00262818");
asm(".equ Reset__Q214PhotoChallenge5Photo,0x00262748");
void retry_photo_challenge(photo_challenge_retry_layout *self) {
    int index = 0;
    self->state = 0;
    self->recordChain = false;
    self->specialPhotoTimer = 0.0f;
    self->activeCameramanIdx = -1;
    for (index = 0; index < self->numCameramen; index++)
        reset_cameraman(&self->cameramen[index]);
    self->numTaken = 0;
    for (index = 0; index < self->numPhotos; index++)
        reset_photo(&self->photos[index]);
}

// 0x00262918 IsCloseToSurfer__CQ214PhotoChallenge9CameramanP22kellyslater_controller
#include "KS/SRC/ks/challenge_photo.h"

#define TAKE_RANGE2 1225.0f

struct photo_board_controller_layout {
    entity *my_board;
};
struct photo_controller_layout {
    char padding[0xd50];
    photo_board_controller_layout my_board_controller;
};

bool PhotoChallenge::Cameraman::IsCloseToSurfer(
    kellyslater_controller *ksctrl) const
{
    float dist2 = 0.0f;

    if (ksctrl && ent && ent->is_active() && ent->is_visible())
    {
        dist2 = (
            ent->get_abs_position() -
            ((photo_controller_layout *)ksctrl)
                ->my_board_controller.my_board->get_abs_position()
        ).length2();

        if (dist2 <= TAKE_RANGE2)
            return true;
    }
    return false;
}
