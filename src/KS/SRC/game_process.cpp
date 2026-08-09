// Matching decompilation blocks selected by generated build shims.

#if defined(KELLY_DECOMP_FUNCTION_00287930)
#include "KS/SRC/game.h"
#include "KS/SRC/ks/ksreplay.h"
// 0x00287930 advance_state_paused__4gamef
extern "C" void advance_game_overlays(game *state, float time_inc)
    __asm__("frame_advance_game_overlays__4gamef");

void game::advance_state_paused(float time_inc)
{
    ksreplay.Tick(false, time_inc);
    void (*advance)(game *, float) = advance_game_overlays;
    advance(this, time_inc);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286990)
// 0x00286990 push_process__4gameR12game_process
#include "KS/SRC/game.h"

__asm__(".equ reset_index__12game_process, 0x00286988");

void game::push_process(game_process &process)
{
    process_stack.push_front(process);
    process_stack.front().reset_index();
    process_stack.front().set_timer(0.0f);
}
#endif


#if defined(KELLY_DECOMP_FUNCTION_00286910)
// 0x00286910 __12game_process
#include "KS/SRC/game.h"

game_process::game_process() { name = 0; flow = 0; index = 0; num_states = 0; timer = 0.0f; allow_override = false; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00286930)
// 0x00286930 __12game_processPCcPC12game_state_ei
#include "KS/SRC/game.h"

game_process::game_process(const char *new_name, const game_state_e *new_flow, int count) : name(new_name), flow(new_flow), num_states(count) { index = 0; timer = 0.0f; allow_override = false; }
#endif

// 0x00286AE8 get_cur_state__C4game
#include "KS/SRC/game.h"

int game::get_cur_state() const { return process_stack.front().get_cur_state(); }

// 0x00286B10 go_next_state__4game
#include "KS/SRC/game.h"

void game::go_next_state() { process_stack.front().go_next_state(); }

// 0x00286B38 reset_index__4game
#include "KS/SRC/game.h"

void game::reset_index() { process_stack.front().reset_index(); }
