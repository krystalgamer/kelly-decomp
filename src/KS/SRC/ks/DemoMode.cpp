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

#if defined(KELLY_DECOMP_FUNCTION_001FA980)
// 0x001FA980 ReturnFromDemoToTitle__15DemoModeManager
class DemoModeManager { char padding0[0x34]; bool wasInTitle; char padding1[0x50]; bool wasInDemo; public: bool ReturnFromDemoToTitle(); };
bool DemoModeManager::ReturnFromDemoToTitle() { return wasInDemo && wasInTitle; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FA9A0)
// 0x001FA9A0 ReturnFromDemoToMain__15DemoModeManager
class DemoModeManager { char padding0[0x34]; bool wasInTitle; char padding1[0x50]; bool wasInDemo; public: bool ReturnFromDemoToMain(); };
bool DemoModeManager::ReturnFromDemoToMain() { return wasInDemo && !wasInTitle; }
#endif
