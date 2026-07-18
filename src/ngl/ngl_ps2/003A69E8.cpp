struct nglQuad { char padding0[0x10]; unsigned int Color1; char padding1[0x10]; unsigned int Color2; char padding2[0x10]; unsigned int Color3; char padding3[0x10]; unsigned int Color4; };
void nglSetQuadColor(nglQuad* quad, unsigned int color) { quad->Color1 = color; quad->Color2 = color; quad->Color3 = color; quad->Color4 = color; }
