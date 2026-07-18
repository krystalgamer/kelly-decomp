class rumbleManager { char padding[0xE4]; bool on[4]; public: void turnOn(bool value, int controller); };
void rumbleManager::turnOn(bool value, int controller) { on[controller] = value; }
