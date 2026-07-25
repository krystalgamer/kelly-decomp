#ifndef KELLY_DECOMP_DXT1_GEN_SHARED_H
#define KELLY_DECOMP_DXT1_GEN_SHARED_H

#include "KS/SRC/ks/dxt1_codebook_shared.h"

class DXTCGen {
    CodeBook Vects;
    cbVector* pVects;

public:
    void BuildCodes3(int channel, cbVector& v1, cbVector& v2);
    int ComputeError(CodeBook &pixels);
};

#endif
