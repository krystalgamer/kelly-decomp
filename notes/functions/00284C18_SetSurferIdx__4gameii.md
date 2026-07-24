# SetSurferIdx__4gameii

- Address: `0x00284C18`
- Size: `0x7C` (124 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.6452 | 0.0 | `candidate.cpp` |
| 2 | different | 6.4516 | 0.0 | `candidate.cpp` |
| 3 | different | 97.5806 | 93.5484 | `candidate.cpp` |
| 4 | different | 12.0968 | 6.4516 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released surfer-index setter after five source-level attempts; the closest candidate reproduced all data accesses and calls but differed in the compiler's shared-epilogue branch-delay scheduling.
