# pause__4game

- Address: `0x0027D788`
- Size: `0xEC` (236 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.9153 | 10.1695 | `candidate-1-exact-released.cpp` |
| 2 | different | 32.2034 | 18.6441 | `candidate-2-packed-flag-storage.cpp` |
| 3 | different | 94.4915 | 88.1356 | `candidate-3-inline-music-and-flag-cast.cpp` |
| 4 | different | 31.25 | 16.6667 | `candidate-4-volatile-packed-flags.cpp` |
| 5 | different | 94.4915 | 88.1356 | `candidate-5-explicit-flag-update.cpp` |

## Outcome

Deferred after five source-faithful attempts. The complete pause behavior, packed flags, audio gating, inline MusicMan path, globals, calls, frame, and size are recovered; seven early flag/devopts register and scheduling choices differ.
