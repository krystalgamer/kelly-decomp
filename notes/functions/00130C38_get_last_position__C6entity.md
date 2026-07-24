# get_last_position__C6entity

- Address: `0x00130C38`
- Size: `0x78` (120 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.9375 | 15.625 | `candidate.cpp` |
| 2 | different | 28.0303 | 9.0909 | `candidate.cpp` |
| 3 | different | 29.1667 | 10.0 | `candidate.cpp` |
| 4 | different | 23.3871 | 9.6774 | `candidate.cpp` |
| 5 | different | 29.8611 | 11.1111 | `candidate.cpp` |

## Outcome

Deferred entity last-position calculation after five source-level attempts; the released absolute-position and frame-delta subtraction reproduced, but the target hidden-return and pose-pointer register allocation did not.
