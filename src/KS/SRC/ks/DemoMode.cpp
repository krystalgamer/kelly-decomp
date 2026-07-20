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

#if defined(KELLY_DECOMP_FUNCTION_001F9FB0)
// 0x001F9FB0 __15DemoModeManager
class DemoModeManager {
    float totalTime;
    float timeoutDelay;
    float demoDuration;
    float demoTime;
    bool inDemo;
    bool played;
    bool demoStarted;
    char padding[0x50];
    unsigned int replay_file_user_data;

public:
    DemoModeManager();
};

DemoModeManager::DemoModeManager()
    : replay_file_user_data(1)
{
    inDemo = false;
    totalTime = 0;
    played = false;
    timeoutDelay = 999.0f;
    demoDuration = 0.0f;
    demoStarted = false;
}
#endif
