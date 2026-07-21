// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00241CD8)
// 0x00241CD8 turnOn__13rumbleManagerbi
class rumbleManager { char padding[0xE4]; bool on[4]; public: void turnOn(bool value, int controller); };
void rumbleManager::turnOn(bool value, int controller) { on[controller] = value; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241DD0)
// 0x00241DD0 isOn__13rumbleManageri
class rumbleManager { char padding[0xE4]; bool on[4]; public: bool isOn(int controller); };
bool rumbleManager::isOn(int controller) { return on[controller]; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_002427C8)
// 0x002427C8 writeText__FiPc
extern "C" int sceWrite(int fd, const char *buffer, int count);
extern "C" int strlen(const char *text);

int writeText(const int fd, char *text) {
    int len = strlen(text);
    return sceWrite(fd, text, len);
}
#endif
