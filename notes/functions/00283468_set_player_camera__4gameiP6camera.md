# set_player_camera__4gameiP6camera

- Address: `0x00283468`
- Size: `0x7C` (124 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.9677 | 83.871 | `candidate.cpp` |
| 2 | different | 97.5806 | 90.3226 | `candidate.cpp` |
| 3 | different | 94.3548 | 90.3226 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released player-camera assignment matched after scoping fixed registers separately for the game-camera query and initialization virtual calls.

## Outcome

The released player camera setter matched exactly on the fourth attempt.
