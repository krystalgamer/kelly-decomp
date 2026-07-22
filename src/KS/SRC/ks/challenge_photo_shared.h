#ifndef KELLY_DECOMP_CHALLENGE_PHOTO_SHARED_H
#define KELLY_DECOMP_CHALLENGE_PHOTO_SHARED_H

struct nglTexture;
void nglDestroyTexture(nglTexture* texture);

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
};

__asm__(".equ nglDestroyTexture__FP10nglTexture, 0x0039C878");

#endif
