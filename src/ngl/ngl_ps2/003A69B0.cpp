struct nglQuad { char padding[0x58]; unsigned int BlendMode; unsigned int BlendModeConstant; };
void nglSetQuadBlend(nglQuad* quad, unsigned int blend, unsigned int constant) { quad->BlendMode = blend; quad->BlendModeConstant = constant; }
