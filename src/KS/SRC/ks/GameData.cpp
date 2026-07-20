// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001A31A8)
// 0x001A31A8 getLastCamera__16StoredConfigDatai
class StoredConfigData { char padding[0x30]; char camera[4][20]; public: char* getLastCamera(int hero); };
char* StoredConfigData::getLastCamera(int hero) { return camera[hero]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A2C10)
// 0x001A2C10 init__16StoredConfigData
struct ksConfigData { int value; };
void initKSConfigStruct(ksConfigData *config);
__asm__(".equ initKSConfigStruct__FP12ksConfigData, 0x001A2B50");
class StoredConfigData { char padding[4]; ksConfigData cData; public: void init(); };
void StoredConfigData::init() { initKSConfigStruct(&cData); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001A3178)
// 0x001A3178 setLastCamera__16StoredConfigDataiPCc
extern "C" char *strcpy(char *destination, const char *source);
__asm__(".equ strcpy, 0x003D3FCC");
class StoredConfigData { char padding[0x30]; char camera[1][20]; public: void setLastCamera(int hero, const char *name); };
void StoredConfigData::setLastCamera(int hero, const char *name) { strcpy(camera[hero], name); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
