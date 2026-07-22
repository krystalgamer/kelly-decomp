// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_002626C8)
#include "KS/SRC/ks/challenge_photo_shared.h"
// 0x002626C8 _$_Q214PhotoChallenge5Photo
extern "C" void builtin_delete(void* pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void PhotoDtor(PhotoChallenge::Photo* self, int deleting)
    __asm__("_$_Q214PhotoChallenge5Photo");

void PhotoDtor(PhotoChallenge::Photo* self, int deleting)
{
    nglDestroyTexture(self->texture);
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
struct PhotoRecord {
    void* texture;
    int score;
    bool special;

    int* GetScore() {
        return &score;
    }
};
class PhotoChallenge { char padding[0x30]; PhotoRecord* photos; public: int* GetPhotoScore(int index) const; };
int* PhotoChallenge::GetPhotoScore(int index) const {
    return photos[index].GetScore();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262680)
// 0x00262680 GetPhotoTexture__14PhotoChallengei
struct PhotoRecord { void* texture; int score; bool special; void* GetTexture() { return texture; } };
class PhotoChallenge { char padding[0x30]; PhotoRecord* photos; public: void* GetPhotoTexture(int index); };
void* PhotoChallenge::GetPhotoTexture(int index) { return photos[index].GetTexture(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262698)
// 0x00262698 GetPhotoIsOfSpecialTrick__14PhotoChallengei
struct PhotoRecord { void* texture; int score; bool special; bool IsOfSpecialTrick() { return special; } };
class PhotoChallenge { char padding[0x30]; PhotoRecord* photos; public: bool GetPhotoIsOfSpecialTrick(int index); };
bool PhotoChallenge::GetPhotoIsOfSpecialTrick(int index) { return photos[index].IsOfSpecialTrick(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002626B0)
// 0x002626B0 __Q214PhotoChallenge5Photo
class PhotoChallenge { public: class Photo { void* texture; int score; bool isOfSpecialTrick; public: Photo(); }; };
PhotoChallenge::Photo::Photo() { texture = 0; score = 0; isOfSpecialTrick = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262748)
// 0x00262748 Reset__Q214PhotoChallenge5Photo
class PhotoChallenge {
public:
    class Photo {
        char padding[0x4];
        int score;
        bool isOfSpecialTrick;
    public:
        void Reset();
    };
};

void PhotoChallenge::Photo::Reset() {
    score = 0;
    isOfSpecialTrick = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002627E8)
// 0x002627E8 __Q214PhotoChallenge9Cameraman
class PhotoChallenge { public: class Cameraman { int state; void* ent; void* destPhoto; void* targetKsctrl; public: Cameraman(); }; };
PhotoChallenge::Cameraman::Cameraman() {
    ent = 0;
    targetKsctrl = 0;
    destPhoto = 0;
    state = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262800)
// 0x00262800 Init__Q214PhotoChallenge9CameramanP6entity
class entity;
class PhotoChallenge { public: class Cameraman { int state; entity* ent; void* destPhoto; void* targetKsctrl; public: void Init(entity* value); }; };
void PhotoChallenge::Cameraman::Init(entity* value) {
    ent = value;
    targetKsctrl = 0;
    destPhoto = 0;
    state = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262818)
// 0x00262818 Reset__Q214PhotoChallenge9Cameraman
class PhotoChallenge {
public:
    class Cameraman {
        char padding[0xC];
        int state;
    public:
        void Reset();
    };
};

void PhotoChallenge::Cameraman::Reset() {
    state = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262758)
// 0x00262758 Show__Q214PhotoChallenge5Photoi
class IGOFrontEnd;
struct nglTexture;

extern "C" void ShowPhoto(
    IGOFrontEnd *self,
    nglTexture *texture,
    int *score,
    int label
) __asm__("ShowPhoto__11IGOFrontEndP10nglTexturePii");
__asm__(".equ ShowPhoto__11IGOFrontEndP10nglTexturePii, 0x0017CE88");

extern IGOFrontEnd *global_igo;
__asm__(".equ global_igo, 0x003E7728");

class PhotoChallenge {
public:
    class Photo {
        nglTexture *texture;
        int score;

    public:
        void Show(int label);
    };
};

void PhotoChallenge::Photo::Show(int label) {
    ShowPhoto(global_igo, texture, &score, label);
    KELLY_DECOMP_COMPILER_BARRIER();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262710)
// 0x00262710 Init__Q214PhotoChallenge5Photoii
class nglTexture;

nglTexture *nglCreateTexture(
    unsigned int format,
    unsigned int width,
    unsigned int height
);
__asm__(".equ nglCreateTexture__FUiUiUi, 0x0039CB38");

class PhotoChallenge {
public:
    class Photo {
        nglTexture *texture;
        int score;
        bool isOfSpecialTrick;

    public:
        void Init(int width, int height);
    };
};

void PhotoChallenge::Photo::Init(int width, int height)
{
    texture = nglCreateTexture(1, width, height);
    score = 0;
    isOfSpecialTrick = false;
}
#endif
