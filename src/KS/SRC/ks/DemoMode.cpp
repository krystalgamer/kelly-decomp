// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001FA978)
// 0x001FA978 inDemoMode__15DemoModeManager
#include "KS/SRC/ks/DemoMode_shared.h"

bool DemoModeManager::inDemoMode() {
    return inDemo;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FA980)
// 0x001FA980 ReturnFromDemoToTitle__15DemoModeManager
#include "KS/SRC/ks/DemoMode_shared.h"
bool DemoModeManager::ReturnFromDemoToTitle() { return wasInDemo && wasInTitle; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001FA9A0)
// 0x001FA9A0 ReturnFromDemoToMain__15DemoModeManager
#include "KS/SRC/ks/DemoMode_shared.h"
bool DemoModeManager::ReturnFromDemoToMain() { return wasInDemo && !wasInTitle; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001F9FB0)
// 0x001F9FB0 __15DemoModeManager
#include "KS/SRC/ks/DemoMode_shared.h"

DemoModeManager::DemoModeManager()
{
    replayFile.UserData = 1;
    inDemo = false;
    totalTime = 0;
    played = false;
    timeoutDelay = 999.0f;
    demoDuration = 0.0f;
    demoStarted = false;
}
#endif
