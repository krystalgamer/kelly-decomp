# render_legal_screen__4game

- Address: `0x00278D50`
- Size: `0xEC` (236 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 24.5968 | 8.0645 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 68.2203 | 61.0169 | `candidate.cpp` |
| 5 | different | 14.1791 | 1.4925 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The legal-screen construction, frontend layout, string setup, allocation, rendering calls, and clear state are recovered, but the target by-value string ABI and one FPU hazard nop cannot be reproduced together.
