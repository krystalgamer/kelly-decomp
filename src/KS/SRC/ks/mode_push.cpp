// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00285970)
// 0x00285970 SetDifficulty__8PushModei
class PushMode {
    char padding[0x44];
    int scoreRequired;
public:
    void SetDifficulty(int points);
};

void PushMode::SetDifficulty(int points) {
    scoreRequired = points;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285B70)
// 0x00285B70 GetPlayerShare__C8PushModei
struct PushPlayer { float share; char padding[0x1C]; };
class PushMode { PushPlayer players[2]; public: float GetPlayerShare(int index) const; };
float PushMode::GetPlayerShare(int index) const { return players[index].share; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00285B80)
// 0x00285B80 GetPlayerViewport__C8PushModei
class recti { int values[4]; };
struct PushPlayer { float share; char padding[0x4]; recti viewport; char trailing[0x8]; };
class PushMode { PushPlayer players[2]; public: const recti& GetPlayerViewport(int index) const; };
const recti& PushMode::GetPlayerViewport(int index) const { return players[index].viewport; }
#endif
