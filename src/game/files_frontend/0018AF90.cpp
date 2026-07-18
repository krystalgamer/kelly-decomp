class MapData { char padding[0x8]; int num_paths; void* paths; public: MapData(); };
MapData::MapData() { num_paths = 0; paths = 0; }
