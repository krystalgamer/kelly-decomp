class GlobalDataClass { public: void unlockSurferPers(int index); };
void GlobalDataClass::unlockSurferPers(int index) { *(bool*)((char*)this + index * 0x78 + 0xF0) = true; }
