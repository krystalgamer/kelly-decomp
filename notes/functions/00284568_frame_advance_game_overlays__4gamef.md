# frame_advance_game_overlays__4gamef

- Address: `0x00284568`
- Size: `0x98` (152 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.8889 | 68.8889 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact screenshot memory-lock flow, global resets, loaded-level bit, and IGO update. Correct function ABIs, raw bool preservation, bit width, and non-tail update matched on attempt 2.

## Outcome

Matched game overlay advance
