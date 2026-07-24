# OnUp__17TrickBookFrontEndi

- Address: `0x00196708`
- Size: `0x84` (132 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TrickBookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TrickBookFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.0909 | 78.7879 | `candidate.cpp` |
| 2 | different | 96.9697 | 93.9394 | `candidate.cpp` |
| 3 | different | 92.4242 | 90.9091 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 14.5833 | 2.7778 | `candidate.cpp` |

## Outcome

Deferred the released trick-book up handler after five source-level attempts; the closest candidate matched 128 of 132 bytes, but the two prologue save instructions remained reversed.
