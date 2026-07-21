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

#if defined(KELLY_DECOMP_FUNCTION_00163AD8)
// 0x00163AD8 _$_Q214IGOIconManager12IconResource
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void IconResourceDtor(void *self, int deleting) __asm__("_$_Q214IGOIconManager12IconResource");
void IconResourceDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00163C90)
// 0x00163C90 _$_Q214IGOIconManager4Icon
extern "C" void builtin_delete(void *pointer) __asm__("__builtin_delete");
__asm__(".equ __builtin_delete, 0x002AC6B0");
extern "C" void IconDtor(void *self, int deleting) __asm__("_$_Q214IGOIconManager4Icon");
void IconDtor(void *self, int deleting) { if (deleting & 1) builtin_delete(self); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00163D38)
// 0x00163D38 Draw__Q214IGOIconManager4Icon
struct nglQuad;
void nglListAddQuad(nglQuad *quad);
__asm__(".equ nglListAddQuad__FP7nglQuad, 0x003A67F0");
class IGOIconManager { public: class Icon { nglQuad *quad_address; char padding[0x74]; bool show; public: void Draw(); }; };
void IGOIconManager::Icon::Draw() { if (show) { nglListAddQuad((nglQuad *)this); KELLY_DECOMP_COMPILER_BARRIER(); } }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00160650)
// 0x00160650 FirstTimeGettingThisMany__14IGOIconManagerib
class IGOIconManager {
    char padding0[0xb5c];
    int iconCounter;
    char padding1[0x1698 - 0xb60];
    bool done_before;

public:
    bool FirstTimeGettingThisMany(int goal, bool ignore_previous);
};

bool IGOIconManager::FirstTimeGettingThisMany(int goal, bool ignore_previous)
{
    if ((!done_before || ignore_previous) && iconCounter >= goal)
    {
        done_before = true;
        return true;
    }

    return false;
}
#endif
