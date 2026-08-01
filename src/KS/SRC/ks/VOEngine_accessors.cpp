#include "KS/SRC/ks/VOEngine.h"

// 0x002566C8 getLastSourcePlayed__8RandomVO
int RandomVO::getLastSourcePlayed()
{
    return lastSource;
}

// 0x002566F8 setProbability__8RandomVOf
void RandomVO::setProbability(float value)
{
    probability = value;
}

// 0x00258448 frameAdvance__8VOEnginef
void VOEngine::frameAdvance(float time_increment)
{
}
