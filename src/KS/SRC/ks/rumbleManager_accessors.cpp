// Released rumble state accessors.

#include "KS/SRC/ks/rumbleManager.h"

// 0x00241CD8 turnOn__13rumbleManagerbi
void rumbleManager::turnOn(bool enabled, int controller)
{
    on[controller] = enabled;
}

// 0x00241DD0 isOn__13rumbleManageri
bool rumbleManager::isOn(int controller)
{
    return on[controller];
}
