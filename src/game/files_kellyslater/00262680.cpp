struct PhotoRecord { void* texture; int score; bool special; void* GetTexture() { return texture; } };
class PhotoChallenge { char padding[0x30]; PhotoRecord* photos; public: void* GetPhotoTexture(int index); };
void* PhotoChallenge::GetPhotoTexture(int index) { return photos[index].GetTexture(); }
