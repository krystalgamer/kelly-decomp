class CompressedPhoto { char padding[0x2000]; int size; bool valid; public: void Reset(); };
void CompressedPhoto::Reset() { size = 0x2000; valid = false; }
