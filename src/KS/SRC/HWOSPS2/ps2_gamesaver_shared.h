#ifndef KELLY_DECOMP_PS2_GAMESAVER_SHARED_H
#define KELLY_DECOMP_PS2_GAMESAVER_SHARED_H

#include "KS/SRC/stringx.h"

extern "C" int sprintf(char*, const char*, ...);

enum {
    GT_MEMORY_CARD_PS2 = 554,
    GT_MEMORY_SLOT_PS2,
};

extern stringx ksGlobalTextArray[];

struct nglFileBuf {
    unsigned char *Buf;
    unsigned int Size;
    unsigned int UserData;
};

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
    unsigned char dastack[0x2011] __attribute__((aligned(16)));

private:
    sceMcTblGetDir tble[20] __attribute__((aligned(64)));
    nglFileBuf icon;
    saveInfo fInfo;
    GameSaverThreadArgs *arg;

public:
    int getIconData();
    void releaseIconData();
    stringx getCardString(int port, int slot);
    stringx getShortCardString(int port, int slot);
};

void KSReadFile(const char *filename, nglFileBuf *file, unsigned int align);
void KSReleaseFile(nglFileBuf *file);

#endif
