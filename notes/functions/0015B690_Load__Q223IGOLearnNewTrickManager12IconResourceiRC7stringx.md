# Load__Q223IGOLearnNewTrickManager12IconResourceiRC7stringx

- Address: `0x0015B690`
- Size: `0x78` (120 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Reference source: `KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.5 | 22.2222 | `candidate.cpp` |
| 2 | different | 56.6667 | 10.0 | `candidate.cpp` |
| 3 | different | 66.6667 | 21.4286 | `candidate.cpp` |
| 4 | different | 66.6667 | 21.4286 | `candidate.cpp` |
| 5 | different | 66.6667 | 21.4286 | `candidate.cpp` |

## Outcome

Deferred learn-new-trick icon resource loading after five source-level attempts; the released index assignment, fixed-string normalization, and texture load reproduced, but the target local fixed-string loop and register scheduling did not.
