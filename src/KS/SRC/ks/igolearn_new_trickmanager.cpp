// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0015B650)
// 0x0015B650 __Q223IGOLearnNewTrickManager12IconResource
class IGOLearnNewTrickManager { public: class IconResource { void* texture; int trickIdx; public: IconResource(); }; };
IGOLearnNewTrickManager::IconResource::IconResource() { texture = 0; trickIdx = -1; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B708)
// 0x0015B708 __Q223IGOLearnNewTrickManager4Icon
class IGOLearnNewTrickManager { public: class Icon { char padding[0x64]; void* resource; bool show; public: Icon(); }; };
IGOLearnNewTrickManager::Icon::Icon() { show = true; resource = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0015B828)
// 0x0015B828 SetShow__Q223IGOLearnNewTrickManager4Iconb
class IGOLearnNewTrickManager {
public:
    class Icon {
        char padding[0x68];
        bool show;

    public:
        void SetShow(bool visible);
    };
};

void IGOLearnNewTrickManager::Icon::SetShow(bool visible) {
    show = visible;
}
#endif
