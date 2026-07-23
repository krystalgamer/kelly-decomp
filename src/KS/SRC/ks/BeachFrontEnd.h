// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_001DCCD8)
// 0x001DCCD8 OnUnactivate__13BeachFrontEnd
class BeachFrontEnd {
    char padding[0xF20];
    bool exitingWithoutSelect;
public:
    void OnUnactivate();
};

void BeachFrontEnd::OnUnactivate() {
    exitingWithoutSelect = false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCCB8)
// 0x001DCCB8 ReloadMap__13BeachFrontEnd
class PanelQuad;
class MapData { public: void Reload(PanelQuad *path); };
__asm__(".equ Reload__7MapDataP9PanelQuad, 0x0018B5C0");
class BeachFrontEnd { char padding0[0xe94]; PanelQuad *path_pq; char padding1[0x4c]; MapData map; public: void ReloadMap(); };
void BeachFrontEnd::ReloadMap() { map.Reload(path_pq); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_001DCC60)
// 0x001DCC60 __tf13BeachFrontEnd
extern "C" void __rtti_class(void **type, const char *name, void **base, int public_base);
extern "C" void **BaseRtti_001DCC60() __asm__("__tf11FEMultiMenu");
extern "C" void *type_001DCC60[] __asm__("__ti13BeachFrontEnd");
extern const char name_001DCC60[];
extern void *base_type_001DCC60[];
__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf11FEMultiMenu, 0x001D8138");
__asm__(".equ __ti13BeachFrontEnd, 0x005A2C98");
__asm__(".equ name_001DCC60, 0x004DDD18");
__asm__(".equ base_type_001DCC60, 0x004DDC48");
extern "C" void **Rtti_001DCC60() __asm__("__tf13BeachFrontEnd");
void **Rtti_001DCC60()
{
    if (!type_001DCC60[0]) {
        BaseRtti_001DCC60();
        __rtti_class(type_001DCC60, name_001DCC60, base_type_001DCC60, 1);
    }
    return type_001DCC60;
}
#endif
