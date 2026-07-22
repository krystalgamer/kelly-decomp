# advance_state_paused__4gamef

- Address: `0x00287930`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game_process.cpp`
- Reference source: `KS/SRC/game_process.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.6667 | 61.1111 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Released paused-state replay and overlay updates matched after a normalized empty barrier prevented the demonstrated tail call of frame_advance_game_overlays.
