#ifndef PS2_GAMESAVER_H
#define PS2_GAMESAVER_H

#include "KS/SRC/stringx.h"
#include "NGL/PS2/ngl_ps2.h"

extern "C" int sprintf(char *, const char *, ...);

enum {
    GSOk = 0,
    GSErrorUnformatted = -1,
    GSErrorOther = -2,
    GSErrorCountNotLoadModules = -3
};

enum {
    GT_MEMORY_CARD_PS2 = 554,
    GT_MEMORY_SLOT_PS2
};

extern stringx ksGlobalTextArray[];

struct sceMcTblGetDir {
    char data[0x80];
};

struct saveInfo {
    float version;
    int type;
    char shortname[8];
    char desc[68];
    long timestamp;
    int valid;
};

struct GameSaverThreadArgs;

class GenericGameSaver {
public:
    static GenericGameSaver *instance;
    static GenericGameSaver *inst() { return instance; }

    unsigned char dastack[0x2011] __attribute__((aligned(16)));

private:
    sceMcTblGetDir tble[20] __attribute__((aligned(64)));
    nglFileBuf icon;
    saveInfo fInfo;
    GameSaverThreadArgs *arg;

public:
    int getIconData();
    void releaseIconData();
    int getFirstCard() { return 0; }
    bool hasSystemFile(int port, int slot);
    int format(int port, int slot);
    static int getInfo(
        int port,
        int slot,
        int *type,
        int *free_blocks,
        int *formatted)
        __asm__("getInfo__16GenericGameSaveriiPiN23");
    void calcSavedGameSize();
    stringx getCardString(int port, int slot);
    stringx getShortCardString(int port, int slot);
    stringx getOverwriteString(int port, int slot);
    stringx getFormattingString(int port, int slot);
};

extern "C" int sceMcFormat(int port, int slot);
extern "C" int sceMcSync(int mode, int *command, int *result);

void KSReadFile(
    const char *filename,
    nglFileBuf *file,
    unsigned int align);
void KSReleaseFile(nglFileBuf *file);

__asm__(".equ sceMcFormat, 0x00392B48");
__asm__(".equ sceMcSync, 0x00392550");
__asm__(".equ getInfo__16GenericGameSaveriiPiN23, 0x001E3DC0");
__asm__(".equ hasSystemFile__16GenericGameSaverii, 0x001E4228");

#endif
