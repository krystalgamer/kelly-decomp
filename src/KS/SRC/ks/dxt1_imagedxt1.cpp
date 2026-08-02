// ImageDXT1 definitions extracted by generated one-function shims.

// 0x00264348 Emit1ColorBlock__9ImageDXTCPUsG9DXT1Color
#include "KS/SRC/ks/dxt1_imagedxt1.h"
void ImageDXTC::Emit1ColorBlock(unsigned short* pDest, DXT1Color c)
{
    pDest[0] = Make565(c);
    pDest[1] = 0;
    pDest[2] = 0;
    pDest[3] = 0;
}

// 0x00263B18 __9ImageDXTC
#include "KS/SRC/ks/dxt1_imagedxt1.h"

ImageDXTC::ImageDXTC() { XSize = YSize = 0; }

// 0x00263B70 ReleaseAll__9ImageDXTC
#include "KS/SRC/ks/dxt1_imagedxt1.h"

void ImageDXTC::ReleaseAll() {
    XSize = YSize = 0;
}

// 0x00264390 Emit2ColorBlock__9ImageDXTCPUsG9DXT1ColorT2P9DXT1Color
#include "KS/SRC/ks/dxt1_imagedxt1.h"

void ImageDXTC::Emit2ColorBlock(unsigned short *pDest, DXT1Color c1, DXT1Color c2, DXT1Color *pSrc)
{
int x, y, Shift;
unsigned short Index;

	pDest[0] = Make565(c1);
	pDest[1] = Make565(c2);
	pDest[2] = 0;
	pDest[3] = 0;
	pDest += 2;

	unsigned char *pcDest = (unsigned char *)pDest;
	for(y=0; y<4; y++)
	{
		Shift = 0;
		for(x=0; x<4; x++)
		{
			if((pSrc[x].Col & Mask0565) == c1.Col)
				Index = 0;
			else
				Index = 1;

			*pcDest |= Index << Shift;
			Shift += 2;
		}
		pSrc += XSize;
		pcDest ++;
	}
}
