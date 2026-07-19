// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00163AC0)
// 0x00163AC0 __Q214IGOIconManager12IconResource
class IGOIconManager { public: class IconResource { void* texture; int trickIdx; char padding[0x4]; unsigned char timesDisplayed; public: IconResource(); }; };
IGOIconManager::IconResource::IconResource() { texture = 0; trickIdx = -1; timesDisplayed = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00163C78)
// 0x00163C78 __Q214IGOIconManager4Icon
class IGOIconManager { public: class Icon { char padding[0x64]; void* resource; char padding_to_show[0x10]; bool show; public: Icon(); }; };
IGOIconManager::Icon::Icon() { show = true; resource = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00163D60)
// 0x00163D60 SetShow__Q214IGOIconManager4Iconb
class IGOIconManager {
public:
    class Icon {
        char padding[0x78];
        bool show;

    public:
        void SetShow(bool visible);
    };
};

void IGOIconManager::Icon::SetShow(bool visible) {
    show = visible;
}
#endif
