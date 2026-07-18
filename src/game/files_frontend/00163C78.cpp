class IGOIconManager { public: class Icon { char padding[0x64]; void* resource; char padding_to_show[0x10]; bool show; public: Icon(); }; };
IGOIconManager::Icon::Icon() { show = true; resource = 0; }
