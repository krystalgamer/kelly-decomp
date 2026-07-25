# do_autobuild_stuff__4game

- Address: `0x00279208`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.3571 | 73.8095 | `candidate.cpp` |
| 2 | different | 69.375 | 60.0 | `candidate.cpp` |
| 3 | different | 98.125 | 95.0 | `candidate.cpp` |
| 4 | different | 51.25 | 30.0 | `candidate.cpp` |
| 5 | different | 61.25 | 45.0 | `candidate.cpp` |

## Outcome

Five released-source variants reproduced autobuild bookkeeping and reporting; the best exact-size candidate differed only in two epilogue scheduling instructions.
