#include "KS/SRC/ks/scoringmanager.h"

// 0x00248718 SetMouthDist__14ScoringManagerf
void ScoringManager::SetMouthDist(float distance)
{
    mouthDist = distance;
}

// 0x002495C8 SetMultAdder__Q214ScoringManager5Chainf
void ScoringManager::Chain::SetMultAdder(float value)
{
    multAdder = value;
}

// 0x0024A0E0 IsInteresting__CQ214ScoringManager5Trick
bool ScoringManager::Trick::IsInteresting() const
{
    return true;
}
