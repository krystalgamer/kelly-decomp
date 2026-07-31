#ifndef DXT1_GEN_H
#define DXT1_GEN_H

#include "KS/SRC/ks/dxt1_codebook.h"

class DXTCGen {
    CodeBook Vects;
    cbVector* pVects;

public:
    void BuildCodes3(cbVector& v1, cbVector& v2);
    void BuildCodes4(cbVector& v1, cbVector& v2);
    void BuildCodes3(int channel, cbVector& v1, cbVector& v2);
    void BuildCodes4(int channel, cbVector& v1, cbVector& v2);
    int ComputeError(CodeBook &pixels);
    int Execute3(CodeBook &source, CodeBook &pixels, CodeBook &destination);
    int Execute4(CodeBook &source, CodeBook &pixels, CodeBook &destination);
};

#endif
