# MakeStringMemCard__16SaveLoadFrontEndi

- Address: `0x0019C838`
- Size: `0xA0` (160 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.5 | 75.0 | `candidate.cpp` |
| 2 | different | 71.25 | 60.0 | `candidate.cpp` |
| 3 | different | 82.5 | 75.0 | `candidate.cpp` |
| 4 | different | 82.5 | 75.0 | `candidate.cpp` |
| 5 | different | 35.1064 | 21.2766 | `candidate.cpp` |

## Outcome

Five released-source string-return variants reproduced card naming and character replacement at exact size, but prologue and call argument scheduling differed.
