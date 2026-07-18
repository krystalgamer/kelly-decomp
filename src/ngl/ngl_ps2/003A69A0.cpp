struct nglTexture;
struct nglQuad {
    char padding[0x60];
    nglTexture* Tex;
};

void nglSetQuadTex(nglQuad* quad, nglTexture* texture) {
    quad->Tex = texture;
}
