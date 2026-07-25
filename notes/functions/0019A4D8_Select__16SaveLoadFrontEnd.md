# Select__16SaveLoadFrontEnd

- Address: `0x0019A4D8`
- Size: `0xA0` (160 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.9762 | 14.2857 | `candidate.cpp` |
| 2 | different | 31.0976 | 19.5122 | `candidate.cpp` |
| 3 | different | 19.0476 | 2.381 | `candidate.cpp` |
| 4 | different | 23.2558 | 9.3023 | `candidate.cpp` |
| 5 | different | 26.1364 | 6.8182 | `candidate.cpp` |

## Outcome

Five released-source and exact-layout variants reproduced save/load selection semantics, but GCC2 global sound-page and final state-call scheduling did not match.
