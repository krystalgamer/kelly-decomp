#ifndef KELLY_DECOMP_CHALLENGE_PHOTO_SHARED_H
#define KELLY_DECOMP_CHALLENGE_PHOTO_SHARED_H

#include "KS/SRC/entity_shared.h"

struct nglTexture;
void nglDestroyTexture(nglTexture* texture);

class Challenge {
public:
    Challenge();
    virtual ~Challenge();
};

class board : public entity {
};

class board_controller {
public:
    board *my_board;
};

class kellyslater_controller {
    char data_before_board_controller[0xd50];
    board_controller my_board_controller;

public:
    board_controller &get_board_controller() {
        return my_board_controller;
    }
    int GetCurrentTrick();
};

class PhotoChallenge : public Challenge {
public:
    class Photo {
    private:
        nglTexture* texture;
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
            kellyslater_controller *ksctrl) const;
    };

private:
    kellyslater_controller *ksctrl;
    int goal;
    int requiredScore;
    int state;
    bool recordChain;
    float specialPhotoTimer;
    int numCameramen;
    Cameraman *cameramen;
    int activeCameramanIdx;
    int numTaken;
    int numPhotos;
    Photo *photos;

public:
    int *GetPhotoScore(int index) const;
    nglTexture *GetPhotoTexture(int index);
    bool GetPhotoIsOfSpecialTrick(int index);
};

__asm__(".equ nglDestroyTexture__FP10nglTexture, 0x0039C878");

#endif
