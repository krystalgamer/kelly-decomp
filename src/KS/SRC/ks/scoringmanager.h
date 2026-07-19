// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026ED90)
// 0x0026ED90 Reset__Q214ScoringManager9CHAININFO
class ScoringManager { public: struct CHAININFO { int points; int facePoints; int airPoints; int tubePoints; int numTricks; bool multiLocation; void Reset(); }; };
void ScoringManager::CHAININFO::Reset() { points = 0; numTricks = 0; multiLocation = false; facePoints = 0; airPoints = 0; tubePoints = 0; }
#endif
