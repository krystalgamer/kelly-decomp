// Matching decompilation blocks selected by generated build shims.


// 0x0018AF90 __7MapData
class MapData { char padding[0x8]; int num_paths; void* paths; public: MapData(); };
MapData::MapData() { num_paths = 0; paths = 0; }

// 0x0018B5C0 Reload__7MapDataP9PanelQuad
#include "KS/SRC/ks/Map.h"

void MapData::Reload(PanelQuad *source) {
}
