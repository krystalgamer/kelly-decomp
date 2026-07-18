class recti { int values[4]; };
struct PushPlayer { float share; char padding[0x4]; recti viewport; char trailing[0x8]; };
class PushMode { PushPlayer players[2]; public: const recti& GetPlayerViewport(int index) const; };
const recti& PushMode::GetPlayerViewport(int index) const { return players[index].viewport; }
