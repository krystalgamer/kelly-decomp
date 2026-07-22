#ifndef KELLY_DECOMP_DXT1_GEN_SHARED_H
#define KELLY_DECOMP_DXT1_GEN_SHARED_H

class cbVector {
    unsigned char pData[4];

public:
    unsigned char& operator[](int i) { return pData[i]; }
};

class DXTCGen {
    char vects[0x94];
    cbVector* pVects;

public:
    void BuildCodes3(int channel, cbVector& v1, cbVector& v2);
};

#endif
