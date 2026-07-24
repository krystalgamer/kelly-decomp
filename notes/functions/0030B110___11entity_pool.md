# __11entity_pool

- Address: `0x0030B110`
- Size: `0x60` (96 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.0 | 4.0 | `candidate.cpp` |
| 2 | different | 31.0 | 12.0 | `candidate.cpp` |
| 3 | different | 79.1667 | 54.1667 | `candidate.cpp` |
| 4 | different | 85.4167 | 75.0 | `candidate.cpp` |
| 5 | different | 97.9167 | 91.6667 | `candidate.cpp` |

## Outcome

Released entity_pool constructor reached 22/24 matching instructions and 97.92%, but initial global/self and final sentinel register scheduling resisted five candidates.
