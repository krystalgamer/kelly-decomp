class IGOIconManager { public: class IconResource { void* texture; int trickIdx; char padding[0x4]; unsigned char timesDisplayed; public: IconResource(); }; };
IGOIconManager::IconResource::IconResource() { texture = 0; trickIdx = -1; timesDisplayed = 0; }
