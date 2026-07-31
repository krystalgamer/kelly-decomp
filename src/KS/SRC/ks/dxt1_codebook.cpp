// Matching decompilation blocks selected by generated build shims.

// 0x00262CB0 FindVectorSlow__8CodeBookRC8cbVector
#include "KS/SRC/ks/dxt1_codebook.h"

__asm__(".equ __vc__t5Table1Z8cbVectori, 0x00265570");
__asm__(".equ DiffMag__C8cbVectorRC8cbVector, 0x00262C60");

int CodeBook::FindVectorSlow(const cbVector &vector)
{
    int count = VectList.Count();
    int closest = vector.DiffMag(VectList[0]);
    int closest_index = 0;

    for (int i = 1; i < count; i++)
    {
        int test_magnitude = vector.DiffMag(VectList[i]);
        if (test_magnitude < closest)
        {
            closest = test_magnitude;
            closest_index = i;
            if (closest == 0)
                break;
        }
    }

    return closest_index;
}
