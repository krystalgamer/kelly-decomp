# force_current_region__6entity

- Address: `0x00131DE0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `candidate.cpp` |
| 2 | different | 7.1429 | 0.0 | `candidate.cpp` |
| 3 | different | 7.1429 | 0.0 | `candidate.cpp` |

## Outcome

Three ordinary C++ calls all tail-call into 8 bytes; target preserves a 28-byte call frame, so deferred without barriers.
