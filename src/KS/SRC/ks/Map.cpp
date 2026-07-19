// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0018AF90)
// 0x0018AF90 __7MapData
class MapData { char padding[0x8]; int num_paths; void* paths; public: MapData(); };
MapData::MapData() { num_paths = 0; paths = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0018B5C0)
// 0x0018B5C0 Reload__7MapDataP9PanelQuad
class PanelQuad;

class MapData {
public:
    void Reload(PanelQuad *source);
};

void MapData::Reload(PanelQuad *source) {
}
#endif
