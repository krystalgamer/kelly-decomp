# _$_10DialogMenu

- Address: `0x0019D110`
- Size: `0xE8` (232 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.6724 | 5.1724 | `candidate-round1.cpp` |
| 2 | different | 17.6724 | 5.1724 | `candidate-round2.cpp` |
| 3 | different | 17.6724 | 5.1724 | `candidate-round3.cpp` |
| 4 | different | 17.6724 | 5.1724 | `candidate-round4.cpp` |
| 5 | different | 17.6724 | 5.1724 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact released DialogMenu destructor deletes its two BoxText members, but the current authentic frontend base declarations collapse the remaining teardown to a 140-byte chain instead of the target 232-byte destructor sequence.
