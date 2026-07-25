# remove_trailing__7stringxPCc

- Address: `0x0034EAB0`
- Size: `0x9C` (156 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.8462 | 51.2821 | `candidate.cpp` |
| 2 | different | 96.1538 | 94.8718 | `candidate.cpp` |
| 3 | different | 96.1538 | 94.8718 | `candidate.cpp` |
| 4 | different | 85.2564 | 84.6154 | `candidate.cpp` |
| 5 | different | 96.1538 | 94.8718 | `candidate.cpp` |

## Outcome

Five released-source and lowered slice variants reproduced trailing removal at exact size; the best matched 37 of 39 instructions, differing only in slice argument scheduling.
