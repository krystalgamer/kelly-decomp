class IGOLearnNewTrickManager { public: class Icon { char padding[0x64]; void* resource; bool show; public: Icon(); }; };
IGOLearnNewTrickManager::Icon::Icon() { show = true; resource = 0; }
