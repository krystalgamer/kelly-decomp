#include "KS/SRC/ks/SoundScript.h"

// 0x0031BF98 pause__18SoundScriptManager
void SoundScriptManager::pause()
{
    paused = true;
}

// 0x0031BFA8 unpause__18SoundScriptManager
void SoundScriptManager::unpause()
{
    paused = false;
}
