// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00262C60)
#include "KS/SRC/ks/dxt1_codebook.h"

int cbVector::DiffMag(const cbVector &other) const
{
    int result = (pData[0] - other.pData[0]) *
        (pData[0] - other.pData[0]);
    result += (pData[1] - other.pData[1]) *
        (pData[1] - other.pData[1]);
    result += (pData[2] - other.pData[2]) *
        (pData[2] - other.pData[2]);
    result += (pData[3] - other.pData[3]) *
        (pData[3] - other.pData[3]);
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262FA8)
#include "KS/SRC/ks/dxt1_gen.h"
// 0x00262FA8 BuildCodes3__7DXTCGeniR8cbVectorT2
void DXTCGen::BuildCodes3(int Channel, cbVector& v1, cbVector& v2)
{
    pVects[0][Channel] = v1[Channel];
    pVects[2][Channel] = v2[Channel];
    pVects[1][Channel] =
        (unsigned char)(((int)v1[Channel] + (int)v2[Channel]) / 2);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262FF0)
// 0x00262FF0 BuildCodes4__7DXTCGeniR8cbVectorT2
class cbVector{unsigned char pData[4];public:unsigned char&operator[](int i){return pData[i];}};class DXTCGen{char pad[148];cbVector*pVects;public:void BuildCodes4(int,cbVector&,cbVector&)__asm__("BuildCodes4__7DXTCGeniR8cbVectorT2");};void DXTCGen::BuildCodes4(int Channel,cbVector&v1,cbVector&v2){pVects[0][Channel]=v1[Channel];pVects[3][Channel]=v2[Channel];pVects[1][Channel]=(unsigned char)(((int)v1[Channel]*2+(int)v2[Channel])/3);pVects[2][Channel]=(unsigned char)(((int)v2[Channel]*2+(int)v1[Channel])/3);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00263078)
// 0x00263078 ComputeError__7DXTCGenR8CodeBook
#include "KS/SRC/ks/dxt1_gen.h"

__asm__(".equ __vc__t5Table1Z8cbVectori, 0x00265570");
__asm__(".equ FindVectorSlow__8CodeBookRC8cbVector, 0x00262CB0");
__asm__(".equ DiffMag__C8cbVectorRC8cbVector, 0x00262C60");

int DXTCGen::ComputeError(CodeBook & Pixels)
{
int Error = 0, Index, i;
int Count = Pixels.GetNumCodes();

	for(i=0; i<Count; i++)
	{
		Index = Vects.FindVectorSlow(Pixels[i]);
		Error += pVects[Index].DiffMag(Pixels[i]);
	}
	return Error;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00262E90)
// 0x00262E90 BuildCodes4__7DXTCGenR8cbVectorT1
class cbVector
{
  unsigned char pData[4];
public:
  inline unsigned char &operator[](int i) { return pData[i]; }
  cbVector &operator=(const cbVector &Vect) { *(int *)pData = *(int *)Vect.pData; return *this; }
};

class DXTCGen
{
  unsigned char released_vects[148];
  cbVector *pVects;
public:
  void BuildCodes4(cbVector &v1, cbVector &v2);
};

void DXTCGen::BuildCodes4(cbVector &v1, cbVector &v2)
{
	pVects[0] = v1;
	pVects[3] = v2;

	pVects[1][0] = v1[0];
	pVects[1][1] = (unsigned char)( ((int)v1[1] * 2 + (int)v2[1]) / 3 );
	pVects[1][2] = (unsigned char)( ((int)v1[2] * 2 + (int)v2[2]) / 3 );
	pVects[1][3] = (unsigned char)( ((int)v1[3] * 2 + (int)v2[3]) / 3 );

	pVects[2][0] = v1[0];
	pVects[2][1] = (unsigned char)( ((int)v2[1] * 2 + (int)v1[1]) / 3 );
	pVects[2][2] = (unsigned char)( ((int)v2[2] * 2 + (int)v1[2]) / 3 );
	pVects[2][3] = (unsigned char)( ((int)v2[3] * 2 + (int)v1[3]) / 3 );
}
#endif
