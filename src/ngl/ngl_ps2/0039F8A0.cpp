struct TIM2_PICTUREHEADER { char padding[0xC]; unsigned short HeaderSize; };
struct nglTexture { char padding[0x18]; TIM2_PICTUREHEADER* ph; };
void* nglTim2GetClut(nglTexture* texture) { return (char*)texture->ph + texture->ph->HeaderSize; }
