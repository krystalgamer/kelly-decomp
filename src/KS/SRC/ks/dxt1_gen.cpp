// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00262FA8)
#include "KS/SRC/ks/dxt1_gen_shared.h"
// 0x00262FA8 BuildCodes3__7DXTCGeniR8cbVectorT2
void DXTCGen::BuildCodes3(int Channel, cbVector& v1, cbVector& v2)
{
    pVects[0][Channel] = v1[Channel];
    pVects[2][Channel] = v2[Channel];
    pVects[1][Channel] =
        (unsigned char)(((int)v1[Channel] + (int)v2[Channel]) / 2);
}
#endif
