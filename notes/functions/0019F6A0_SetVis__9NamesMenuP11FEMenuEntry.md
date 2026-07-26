# SetVis__9NamesMenuP11FEMenuEntry

- Address: `0x0019F6A0`
- Size: `0xE8` (232 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 27.1552 | 12.069 | `candidate.cpp` |
| 3 | different | 65.9483 | 58.6207 | `candidate.cpp` |
| 4 | different | 65.5172 | 58.6207 | `candidate.cpp` |
| 5 | different | 30.9322 | 16.9492 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The target adds a card-entry boundary absent from released SetVis; the closest reconstructed flow remains eight bytes short because of one float-conversion hazard nop and a target max-vis reload that GCC caches.
