#ifndef COMPRESSED_PHOTO_H
#define COMPRESSED_PHOTO_H

class nglTexture;

class CompressedPhoto {
public:
    enum {
        PHOTO_WIDTH = 128,
        PHOTO_HEIGHT = 128
    };

    CompressedPhoto();
    ~CompressedPhoto();
    void Reset();

private:
    unsigned char blocks[(PHOTO_WIDTH * PHOTO_HEIGHT * 4) / 8];
    int size;
    bool valid;
};

#endif
