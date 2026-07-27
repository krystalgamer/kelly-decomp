# render_title_screen__4game

- Address: `0x00278E40`
- Size: `0xEC` (236 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.2097 | 14.5161 | `candidate.cpp` |
| 2 | different | 27.4194 | 14.5161 | `candidate.cpp` |
| 3 | different | 69.4915 | 61.0169 | `candidate.cpp` |
| 4 | different | 69.4915 | 61.0169 | `candidate.cpp` |
| 5 | different | 27.9661 | 22.0339 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The title-screen path recovers the target frame, globals, string constructions, allocation, Title construction, virtual rendering, scene calls, clear state, and epilogue; six setup/hazard positions remain different.
