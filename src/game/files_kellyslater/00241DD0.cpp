class rumbleManager { char padding[0xE4]; bool on[4]; public: bool isOn(int controller); };
bool rumbleManager::isOn(int controller) { return on[controller]; }
