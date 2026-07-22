// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_001E60F0) || \
    defined(KELLY_DECOMP_FUNCTION_001E6380)
#include "KS/SRC/HWOSPS2/ps2_gamesaver_shared.h"
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E60F0)
asm(".equ ksGlobalTextArray, 0x003E6050");
asm(".equ sprintf, 0x003D38A8");
asm(".equ __7stringxPCci, 0x0034D438");

// 0x001E60F0 getCardString__16GenericGameSaverii
stringx GenericGameSaver::getCardString(int port, int slot)
{
    char errortxt[100];
    sprintf(errortxt, ksGlobalTextArray[GT_MEMORY_CARD_PS2].c_str(), port + 1);
    return stringx(errortxt);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E6380)
asm(".equ ksGlobalTextArray, 0x003E6050");
asm(".equ sprintf, 0x003D38A8");
asm(".equ __7stringxPCci, 0x0034D438");

// 0x001E6380 getShortCardString__16GenericGameSaverii
stringx GenericGameSaver::getShortCardString(int port, int slot)
{
    char errortxt[100];
    sprintf(errortxt, ksGlobalTextArray[GT_MEMORY_SLOT_PS2].c_str(), port + 1);
    return stringx(errortxt);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E6780)
// 0x001E6780 getOverwriteString__16GenericGameSaverii
class stringx {
    char *chars;
    void *my_buf;

public:
    stringx(const char *text, int length = -1);
    ~stringx();
};

__asm__(".equ __7stringxPCci, 0x0034D438");

extern const char *overwrite_text;
__asm__(".equ overwrite_text, 0x003E6860");

class GenericGameSaver {
public:
    stringx getOverwriteString(int port, int slot);
};

stringx GenericGameSaver::getOverwriteString(int port, int slot)
{
    return stringx(overwrite_text);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E5C98)
// 0x001E5C98 releaseIconData__16GenericGameSaver
struct nglFileBuf {
    unsigned char *Buf;
    unsigned int Size;
    unsigned int UserData;
};

void KSReleaseFile(nglFileBuf *file);
__asm__(".equ KSReleaseFile__FP10nglFileBuf, 0x001E3300");

class GenericGameSaver {
    char padding[0x2a40];
    nglFileBuf icon;

public:
    void releaseIconData();
};

void GenericGameSaver::releaseIconData()
{
    if (icon.Buf)
        KSReleaseFile(&icon);
    icon.Buf = 0;
}
#endif
