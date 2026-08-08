// Matching decompilation blocks selected by generated build shims.


// 0x001A31A8 getLastCamera__16StoredConfigDatai
#include "KS/SRC/ks/GameData.h"

char* StoredConfigData::getLastCamera(int hero) { return camera[hero]; }

// 0x001A3178 setLastCamera__16StoredConfigDataiPCc
#include "KS/SRC/ks/GameData.h"

extern "C" char *copy_string(char *destination, const char *source)
    __asm__("strcpy");
__asm__(".equ strcpy, 0x003D3FCC");

void StoredConfigData::setLastCamera(int hero, const char *name) {
    char *(*copy)(char *, const char *) = copy_string;
    copy(camera[hero], name);
}
