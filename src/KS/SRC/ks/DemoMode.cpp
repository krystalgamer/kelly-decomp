// Matching decompilation blocks selected by generated build shims.

#include "KS/SRC/ks/DemoMode.h"

// 0x001FA978 inDemoMode__15DemoModeManager
bool DemoModeManager::inDemoMode()
{
    return inDemo;
}

// 0x001FA980 ReturnFromDemoToTitle__15DemoModeManager
bool DemoModeManager::ReturnFromDemoToTitle()
{
    return wasInDemo && wasInTitle;
}

// 0x001FA9A0 ReturnFromDemoToMain__15DemoModeManager
bool DemoModeManager::ReturnFromDemoToMain()
{
    return wasInDemo && !wasInTitle;
}

// 0x001F9FB0 __15DemoModeManager
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
