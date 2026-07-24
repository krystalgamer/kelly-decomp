# Load__16SaveLoadFrontEnd

- Address: `0x00199DB8`
- Size: `0x70` (112 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 75.0 | `candidate.cpp` |
| 2 | different | 96.4286 | 92.8571 | `candidate.cpp` |
| 3 | different | 83.9286 | 82.1429 | `candidate.cpp` |
| 4 | different | 14.1667 | 0.0 | `candidate.cpp` |
| 5 | different | 96.4286 | 92.8571 | `candidate.cpp` |

## Outcome

Deferred save/load frontend loading after five source-faithful candidates; only independent ra/s0 prologue save ordering remained different in the closest candidate
