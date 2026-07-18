class StoredConfigData { char padding[0x30]; char camera[4][20]; public: char* getLastCamera(int hero); };
char* StoredConfigData::getLastCamera(int hero) { return camera[hero]; }
