// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00264348)
#include "KS/SRC/ks/dxt1_imagedxt1_shared.h"
// 0x00264348 Emit1ColorBlock__9ImageDXTCPUsG9DXT1Color
void ImageDXTC::Emit1ColorBlock(unsigned short* pDest, DXT1Color c)
{
    pDest[0] = Make565(c);
    pDest[1] = 0;
    pDest[2] = 0;
    pDest[3] = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00263B18)
// 0x00263B18 __9ImageDXTC
class ImageDXTC { int XSize; int YSize; public: ImageDXTC(); };
ImageDXTC::ImageDXTC() { XSize = YSize = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00263B70)
// 0x00263B70 ReleaseAll__9ImageDXTC
class ImageDXTC {
    int XSize;
    int YSize;
public:
    void ReleaseAll();
};

void ImageDXTC::ReleaseAll() {
    XSize = YSize = 0;
}
#endif
