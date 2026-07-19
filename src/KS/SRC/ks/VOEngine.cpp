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
