// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002566D8)
// 0x002566D8 isPlaying__8RandomVO
#include "KS/SRC/ks/VOEngine.h"

nslSoundId nslGetSoundStatus(nslSoundId sound);
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
bool RandomVO::isPlaying() { return nslGetSoundStatus(thisSound) != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258520)
// 0x00258520 stopVO__8VOEngine
#include "KS/SRC/ks/VOEngine.h"

int nslGetSoundStatus(unsigned int sound);
void nslStopSound(unsigned int sound);
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslStopSound__FUi, 0x0038D288");

void VOEngine::stopVO()
{
    if (nslGetSoundStatus(currentSound) != 0) {
        void (*stop_sound)(unsigned int) = nslStopSound;
        stop_sound(currentSound);
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258558)
#include "KS/SRC/ks/VOEngine.h"
// 0x00258558 setCurrentLevel__8VOEnginei
int nslGetSoundStatus(unsigned int sound);
void nslStopSound(unsigned int sound);
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslStopSound__FUi, 0x0038D288");
void VOEngine::setCurrentLevel(int level)
{
    if (nslGetSoundStatus(currentSound) != 0)
        nslStopSound(currentSound);
    myTimer = 0;
    currentLevel = level;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00256740)
// 0x00256740 addSource__8RandomVOUi
struct RandomVO{char pad0[8];int totalSources;char pad1[4];int numUnusedSources;int valid;char pad2[12];unsigned sources[50];char pad3[200];unsigned sourcesUnused[50];void init();bool addSource(unsigned)__asm__("addSource__8RandomVOUi");};__asm__(".equ init__8RandomVO,0x00256290");bool RandomVO::addSource(unsigned s){if(!valid)init();if(totalSources>=50)return false;sources[totalSources++]=s;sourcesUnused[numUnusedSources++]=s;return true;}
#endif
