# OnTriangle__13BoardFrontEndi

- Address: `0x001B6F68`
- Size: `0xEC` (236 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BoardFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.2881 | 1.6949 | `candidate-round1.cpp` |
| 2 | matched | 100.0 | 98.3333 | `candidate-round2.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate-3-canonical.cpp` |

### Attempt 3 notes

Revalidated the exact target-version body after consolidating game_mode_t, GraphicalMenuSystem multiplayer fields, FEManager offsets, and BoardFrontEnd fields. The 6-job build completed in 25 seconds and passed the ROM gate.

## Outcome

Matched BoardFrontEnd triangle handling using the released navigation body plus the binary-proven sound/frame preamble, with canonical game-mode, menu-system, manager, and board-menu declarations. The 6-job build completed in 25 seconds.
