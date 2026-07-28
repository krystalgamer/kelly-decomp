# register_control__9input_mgrRC12game_control

- Address: `0x00343D50`
- Size: `0x170` (368 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released source for register_control__9input_mgrRC12game_control. Result `compile_failed`, score 0.0000; no retry or variant was made.

## Outcome

The exact released game-control registration failed the isolated compile because legacy STL headers were unavailable; the sole attempt scored 0%.
