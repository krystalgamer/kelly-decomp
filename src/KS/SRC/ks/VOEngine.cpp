// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002566C8)
// 0x002566C8 getLastSourcePlayed__8RandomVO
class RandomVO {
    char padding[0x18];
    int lastSource;
public:
    int getLastSourcePlayed();
};

int RandomVO::getLastSourcePlayed() {
    return lastSource;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002566F8)
// 0x002566F8 setProbability__8RandomVOf
class RandomVO {
    float probability;
public:
    void setProbability(float value);
};

void RandomVO::setProbability(float value) {
    probability = value;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258448)
// 0x00258448 frameAdvance__8VOEnginef
class VOEngine {
public:
    void frameAdvance(float timeInc);
};

void VOEngine::frameAdvance(float timeInc) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_002566D8)
// 0x002566D8 isPlaying__8RandomVO
unsigned int nslGetSoundStatus(unsigned int sound);
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
class RandomVO { char padding[4]; unsigned int thisSound; public: bool isPlaying(); };
bool RandomVO::isPlaying() { return nslGetSoundStatus(thisSound) != 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00258520)
// 0x00258520 stopVO__8VOEngine
int nslGetSoundStatus(unsigned int sound);
void nslStopSound(unsigned int sound);
__asm__(".equ nslGetSoundStatus__FUi, 0x0038DBA0");
__asm__(".equ nslStopSound__FUi, 0x0038D288");

class VOEngine {
    char padding[0x17c];
    unsigned int currentSound;

public:
    void stopVO();
};

void VOEngine::stopVO()
{
    if (nslGetSoundStatus(currentSound) != 0) {
        nslStopSound(currentSound);
        KELLY_DECOMP_COMPILER_BARRIER();
    }
}
#endif
