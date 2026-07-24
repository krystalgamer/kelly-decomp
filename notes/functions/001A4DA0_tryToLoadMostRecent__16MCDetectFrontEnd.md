# tryToLoadMostRecent__16MCDetectFrontEnd

- Address: `0x001A4DA0`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MCDetectFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MCDetectFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.7812 | 40.625 | `candidate.cpp` |
| 2 | different | 83.0645 | 77.4194 | `candidate.cpp` |
| 3 | different | 54.0323 | 45.1613 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 87.0968 | 80.6452 | `candidate.cpp` |

## Outcome

Deferred MCDetectFrontEnd::tryToLoadMostRecent after five source-level attempts; the released state initialization, card-result dispatch, and load call reproduced at 87%, but the target switch branch and shared epilogue scheduling did not.
