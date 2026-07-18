struct PushPlayer { float share; char padding[0x1C]; };
class PushMode { PushPlayer players[2]; public: float GetPlayerShare(int index) const; };
float PushMode::GetPlayerShare(int index) const { return players[index].share; }
