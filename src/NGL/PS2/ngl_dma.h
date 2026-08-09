#ifndef NGL_DMA_H
#define NGL_DMA_H

struct tD_PCR {
    unsigned int CPC0 : 1;
    unsigned int CPC1 : 1;
    unsigned int CPC2 : 1;
    unsigned int padding0 : 5;
    unsigned int CPC8 : 1;
    unsigned int CPC9 : 1;
    unsigned int padding1 : 22;
};

extern tD_PCR *_nglDmaPCR;

#endif
