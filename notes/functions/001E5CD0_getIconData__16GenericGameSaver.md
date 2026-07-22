# getIconData__16GenericGameSaver

- Address: `0x001E5CD0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.7368 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The released body was preserved.  The existing game-saver header was expanded
from method-only declarations to the original aligned stack, SDK directory
table, icon buffer, save metadata, and callback-argument layout; the prior
icon-release selector now reuses it.  The icon filename is bound to its
existing ROM string, using the required adjusted high-half representation.

## Outcome

Matched GenericGameSaver icon loading after consolidating the shared original game-saver layout.
