// Matching decompilation blocks selected by generated build shims.


// 0x001A31A8 getLastCamera__16StoredConfigDatai
#include "KS/SRC/ks/GameData.h"

char* StoredConfigData::getLastCamera(int hero) { return camera[hero]; }

#if defined(KELLY_DECOMP_FUNCTION_001A3178)
// 0x001A3178 setLastCamera__16StoredConfigDataiPCc
extern "C" char *strcpy(char *destination, const char *source);
__asm__(".equ strcpy, 0x003D3FCC");
class StoredConfigData { char padding[0x30]; char camera[1][20]; public: void setLastCamera(int hero, const char *name); };
void StoredConfigData::setLastCamera(int hero, const char *name) { strcpy(camera[hero], name); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
