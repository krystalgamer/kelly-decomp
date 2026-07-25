# MakeStringSlot__16SaveLoadFrontEndi

- Address: `0x0019C790`
- Size: `0xA8` (168 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.1905 | 71.4286 | `candidate.cpp` |
| 2 | different | 76.1905 | 71.4286 | `candidate.cpp` |
| 3 | different | 30.2326 | 11.6279 | `candidate.cpp` |
| 4 | different | 28.5714 | 9.5238 | `candidate.cpp` |
| 5 | different | 32.3864 | 22.7273 | `candidate.cpp` |

## Outcome

Five released save-slot string variants reproduced all calls but not aggregate-return argument scheduling.
