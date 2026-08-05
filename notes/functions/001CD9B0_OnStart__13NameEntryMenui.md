# OnStart__13NameEntryMenui

- Address: `0x001CD9B0`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/HighScoreFrontEnd.cpp`
- Reference source: `KS/SRC/ks/HighScoreFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 10.0 | `size40-name-start.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-name-start-2.cpp` |
| 3 | different | 12.5 | 0.0 | `size40-name-start-3.cpp` |

## Outcome

The shared `NameEntryMenu` layout preserves `in_game` at 0x2dc; an ordinary local base-call pointer retains the conditional call frame.
