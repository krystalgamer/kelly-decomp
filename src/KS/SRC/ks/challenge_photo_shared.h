#ifndef KELLY_DECOMP_CHALLENGE_PHOTO_SHARED_H
#define KELLY_DECOMP_CHALLENGE_PHOTO_SHARED_H

#include "KS/SRC/entity_shared.h"

struct nglTexture;
void nglDestroyTexture(nglTexture* texture);

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
};

class PhotoChallenge {
public:
    class Photo {
    public:
        nglTexture* texture;
        int score;
        bool isOfSpecialTrick;

        Photo();
        ~Photo();
        void Reset();
    };

    class Cameraman {
        kellyslater_controller *targetKsctrl;
        entity *ent;
        Photo *destPhoto;
        int state;

    public:
        bool IsCloseToSurfer(
            kellyslater_controller *ksctrl) const;
    };
};

__asm__(".equ nglDestroyTexture__FP10nglTexture, 0x0039C878");

#endif
