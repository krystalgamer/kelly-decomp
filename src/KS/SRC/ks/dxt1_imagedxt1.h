#ifndef DXT1_IMAGEDXT1_H
#define DXT1_IMAGEDXT1_H

class DXT1Color {
public:
    union {
        unsigned char channels[4];
        unsigned int Col;
    };
};

class ImageDXTC {
    static const unsigned int Mask0565 = 0x00f8fcf8;
    int XSize;
    int YSize;
    unsigned char AlphaValue;

public:
    void Emit1ColorBlock(unsigned short* pDest, DXT1Color c);
    void Emit2ColorBlock(
        unsigned short *destination,
        DXT1Color first,
        DXT1Color second,
        DXT1Color *source);
    inline unsigned short Make565(const DXT1Color& Col) const
    {
        return ((unsigned short)(Col.channels[0] >> 3) << 11) |
               ((unsigned short)(Col.channels[1] >> 2) << 5) |
               (unsigned short)(Col.channels[2] >> 3);
    }
};

#endif
