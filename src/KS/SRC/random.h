// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00112C68)
// 0x00112C68 NextRand__6Random
class Random { unsigned int seed; public: unsigned int NextRand(); };
unsigned int Random::NextRand() { seed = seed * 0x41c64e6d + 12345; return (seed >> 16) & 0x7fff; }
#endif
