# do_event__12rotate_eventRCf

- Address: `0x002CA538`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/element.cpp`
- Reference source: `KS/SRC/element.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.1765 | 88.2353 | `candidate.cpp` |
| 2 | different | 28.6765 | 8.8235 | `candidate.cpp` |
| 3 | different | 91.1765 | 88.2353 | `candidate.cpp` |
| 4 | different | 91.1765 | 88.2353 | `candidate.cpp` |
| 5 | different | 35.1351 | 10.8108 | `candidate.cpp` |

## Outcome

Deferred the released rotation event update after five source-level attempts; angle interpolation, sine/cosine calculation, and rotation-matrix writes were reconstructed, but four prologue/setup instructions remained differently scheduled.
