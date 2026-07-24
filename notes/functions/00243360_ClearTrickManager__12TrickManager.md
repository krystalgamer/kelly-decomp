# ClearTrickManager__12TrickManager

- Address: `0x00243360`
- Size: `0x80` (128 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/trick_system.cpp`
- Reference source: `KS/SRC/ks/trick_system.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.4722 | 2.9412 | `candidate.cpp` |
| 2 | different | 47.0588 | 12.5 | `candidate.cpp` |
| 3 | different | 85.9375 | 13.3333 | `candidate.cpp` |
| 4 | different | 93.75 | 13.3333 | `candidate.cpp` |
| 5 | different | 29.4118 | 0.0 | `candidate.cpp` |

## Outcome

Deferred the released trick-manager clear after five source-level attempts; the closest candidate matched 120 of 128 bytes, but the first loop pointer decrement would not schedule into the branch delay slot.
