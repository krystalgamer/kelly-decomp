# Init__16SaveLoadFrontEnd

- Address: `0x00199D48`
- Size: `0x70` (112 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.2857 | 17.8571 | `candidate.cpp` |
| 2 | different | 83.0357 | 39.2857 | `candidate.cpp` |
| 3 | different | 96.4286 | 92.8571 | `candidate.cpp` |
| 4 | different | 91.0714 | 89.2857 | `candidate.cpp` |
| 5 | different | 15.8333 | 0.0 | `candidate.cpp` |

## Outcome

Deferred save/load frontend initialization after five source-faithful candidates; only independent ra/s0 prologue save ordering remained different in the closest candidate
