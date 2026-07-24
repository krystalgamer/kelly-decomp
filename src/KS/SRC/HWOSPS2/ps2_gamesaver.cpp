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
#include "KS/SRC/HWOSPS2/ps2_gamesaver_shared.h"
__asm__(".equ KSReleaseFile__FP10nglFileBuf, 0x001E3300");

void GenericGameSaver::releaseIconData()
{
    if (icon.Buf)
        KSReleaseFile(&icon);
    icon.Buf = 0;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E5CD0)
// 0x001E5CD0 getIconData__16GenericGameSaver
#include "KS/SRC/HWOSPS2/ps2_gamesaver_shared.h"
__asm__(".equ releaseIconData__16GenericGameSaver, 0x001E5C98");
__asm__(".equ KSReadFile__FPCcP10nglFileBufUi, 0x001E32A0");
extern const char icon_filename[];
// Adjusted high-half representation for the signed low address component.
__asm__(".equ icon_filename, 0x004DF1E0");
int GenericGameSaver::getIconData() {
    if (icon.Buf)
        releaseIconData();
    KSReadFile(icon_filename, &icon, 1);
    return icon.Size;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001E4028)
// 0x001E4028 calcSavedGameSize__16GenericGameSaver
struct options{char p0[4];int stash_only;};extern options*developer_options;extern int saved_game_size;__asm__(".equ developer_options,0x0046B180");__asm__(".equ saved_game_size,0x0042E510");struct nglFileBuf{void*buf;unsigned Size;};extern const char icon_name[];__asm__(".equ icon_name,0x004DF1E0");extern "C" void read_file(const char*,nglFileBuf*,unsigned) __asm__("KSReadFile__FPCcP10nglFileBufUi");__asm__(".equ KSReadFile__FPCcP10nglFileBufUi,0x001E32A0");extern "C" void calc_size(void*) __asm__("calcSavedGameSize__16GenericGameSaver");void calc_size(void*){saved_game_size=101;if(developer_options->stash_only){nglFileBuf f;read_file(icon_name,&f,1);register unsigned size __asm__("$3")=f.Size;register int total __asm__("$2")=saved_game_size;total+=2*((size+1023)/1024);total+=1;saved_game_size=total;}}
#endif
