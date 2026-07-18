struct nglQuad {
    char padding[0x50];
    float Z;
};

void nglSetQuadZ(nglQuad* quad, float value) {
    quad->Z = value;
}
