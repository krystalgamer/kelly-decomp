#ifndef KELLY_DECOMP_DXT1_IMAGEDXT1_SHARED_H
#define KELLY_DECOMP_DXT1_IMAGEDXT1_SHARED_H

class DXT1Color {
public:
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

class ImageDXTC {
    int XSize;
    int YSize;
    unsigned char AlphaValue;

public:
    void Emit1ColorBlock(unsigned short* pDest, DXT1Color c);
    inline unsigned short Make565(const DXT1Color& Col) const
    {
        return ((unsigned short)(Col.r >> 3) << 11) |
               ((unsigned short)(Col.g >> 2) << 5) |
               (unsigned short)(Col.b >> 3);
    }
};

#endif
