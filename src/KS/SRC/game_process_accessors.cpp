#include "KS/SRC/game.h"

// 0x00286978 go_next_state__12game_process
void game_process::go_next_state()
{
    ++index;
}

// 0x00286988 reset_index__12game_process
void game_process::reset_index()
{
    index = 0;
}
