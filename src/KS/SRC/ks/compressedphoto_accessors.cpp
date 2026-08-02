// Released compressed-photo state methods.

#include "KS/SRC/ks/compressedphoto.h"

// 0x00262A38 Reset__15CompressedPhoto
void CompressedPhoto::Reset()
{
    size = (PHOTO_WIDTH * PHOTO_HEIGHT * 4) / 8;
    valid = false;
}
