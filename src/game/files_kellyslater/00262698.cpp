struct PhotoRecord { void* texture; int score; bool special; bool IsOfSpecialTrick() { return special; } };
class PhotoChallenge { char padding[0x30]; PhotoRecord* photos; public: bool GetPhotoIsOfSpecialTrick(int index); };
bool PhotoChallenge::GetPhotoIsOfSpecialTrick(int index) { return photos[index].IsOfSpecialTrick(); }
