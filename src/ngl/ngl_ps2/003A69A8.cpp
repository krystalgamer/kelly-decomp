struct nglQuad {
    char padding[0x54];
    unsigned int MapFlags;
};

void nglSetQuadMapFlags(nglQuad* quad, unsigned int flags) {
    quad->MapFlags = flags;
}
