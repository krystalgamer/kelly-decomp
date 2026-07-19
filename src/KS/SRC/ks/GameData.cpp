// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001A31A8)
// 0x001A31A8 getLastCamera__16StoredConfigDatai
class StoredConfigData { char padding[0x30]; char camera[4][20]; public: char* getLastCamera(int hero); };
char* StoredConfigData::getLastCamera(int hero) { return camera[hero]; }
#endif
