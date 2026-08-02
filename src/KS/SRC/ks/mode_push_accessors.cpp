#include "KS/SRC/game.h"

// 0x00285B70 GetPlayerShare__C8PushModei
float PushMode::GetPlayerShare(int index) const
{
    return players[index].share;
}

// 0x00285B80 GetPlayerViewport__C8PushModei
const game_recti &PushMode::GetPlayerViewport(int index) const
{
    return players[index].viewport;
}

// 0x00285970 SetDifficulty__8PushModei
void PushMode::SetDifficulty(int points)
{
    scoreRequired = points;
}
