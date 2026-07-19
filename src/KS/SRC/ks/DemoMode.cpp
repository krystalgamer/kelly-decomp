// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001FA978)
// 0x001FA978 inDemoMode__15DemoModeManager
class DemoModeManager {
    char padding[0x10];
    bool inDemo;
public:
    bool inDemoMode();
};

bool DemoModeManager::inDemoMode() {
    return inDemo;
}
#endif
