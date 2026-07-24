// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00262C60)
class cbVector {
    unsigned char data[4];
public:
    int DiffMag(const cbVector &other) const
        __asm__("DiffMag__C8cbVectorRC8cbVector");
};

int cbVector::DiffMag(const cbVector &other) const
{
    int result = (data[0] - other.data[0]) *
        (data[0] - other.data[0]);
    result += (data[1] - other.data[1]) *
        (data[1] - other.data[1]);
    result += (data[2] - other.data[2]) *
        (data[2] - other.data[2]);
    result += (data[3] - other.data[3]) *
        (data[3] - other.data[3]);
    return result;
}
#endif

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

#if defined(KELLY_DECOMP_FUNCTION_00262E20)
// 0x00262E20 BuildCodes3__7DXTCGenR8cbVectorT1
struct cbVector{unsigned char pData[4];unsigned char&operator[](int i){return pData[i];}cbVector&operator=(const cbVector&v){*(int*)pData=*(const int*)v.pData;return *this;}};struct DXTCGen{char p0[148];cbVector*pVects;};extern "C" void build3(DXTCGen*self,cbVector&v1,cbVector&v2) __asm__("BuildCodes3__7DXTCGenR8cbVectorT1");void build3(DXTCGen*self,cbVector&v1,cbVector&v2){self->pVects[0]=v1;self->pVects[1][0]=v1[0];self->pVects[1][1]=(unsigned char)(((int)v1[1]+(int)v2[1])/2);self->pVects[1][2]=(unsigned char)(((int)v1[2]+(int)v2[2])/2);self->pVects[1][3]=(unsigned char)(((int)v1[3]+(int)v2[3])/2);self->pVects[2]=v2;}
#endif
