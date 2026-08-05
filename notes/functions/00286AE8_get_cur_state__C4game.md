# get_cur_state__C4game

- Address: `0x00286AE8`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game_process.cpp`
- Reference source: `KS/SRC/game_process.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical `list::front()` and `game_process::get_cur_state()` accessors reproduce the released process-stack lookup.

## Outcome

The released `game::get_cur_state` accessor matched exactly.
