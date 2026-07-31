#ifndef INCLUDED_CHALLENGE_PHOTO_H
#define INCLUDED_CHALLENGE_PHOTO_H

#include "KS/SRC/entity.h"
#include "KS/SRC/ks/challenge.h"

struct nglTexture;
class kellyslater_controller;

void nglDestroyTexture(nglTexture *texture);

class PhotoChallenge : public Challenge {
private:
    enum STATE {
        STATE_NONE,
        STATE_RETICLE,
        STATE_TAKE,
        STATE_SHOW
    };

public:
    class Photo {
    private:
        nglTexture *texture;
        int score;
        bool isOfSpecialTrick;

    public:
        Photo();
        ~Photo();
        void Init(int width, int height);
        void Reset();
        void Show(int label);
        void CheckProperties(kellyslater_controller *subject);
        nglTexture *GetTexture() { return texture; }
        int *GetScore() { return &score; }
        bool IsOfSpecialTrick() const { return isOfSpecialTrick; }
    };

    class Cameraman {
    public:
        enum CSTATE {
            CSTATE_NONE,
            CSTATE_TAKING,
            CSTATE_TOOK
        };

    private:
        kellyslater_controller *targetKsctrl;
        entity *ent;
        Photo *destPhoto;
        CSTATE state;

    public:
        Cameraman();
        void Init(entity *value);
        void Reset();
        void BeginTakingPicture(
            kellyslater_controller *target,
            Photo *photo);
        bool IsCloseToSurfer(
            kellyslater_controller *controller) const;
    };

private:
    kellyslater_controller *ksctrl;
    int goal;
    int requiredScore;
    STATE state;
    bool recordChain;
    float specialPhotoTimer;
    int numCameramen;
    Cameraman *cameramen;
    int activeCameramanIdx;
    int numTaken;
    int numPhotos;
    Photo *photos;

public:
    PhotoChallenge();
    virtual ~PhotoChallenge();
    void Retry();
    int *GetPhotoScore(int index) const;
    nglTexture *GetPhotoTexture(int index);
    bool GetPhotoIsOfSpecialTrick(int index);
};

__asm__(".equ nglDestroyTexture__FP10nglTexture, 0x0039C878");

#endif
