# construct_signal_list__6entity

- Address: `0x00144AF8`
- Size: `0xA0` (160 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.125 | 24.3243 | `candidate.cpp` |
| 2 | different | 63.75 | 63.8889 | `candidate.cpp` |
| 3 | different | 66.25 | 63.8889 | `candidate.cpp` |
| 4 | different | 41.25 | 22.2222 | `candidate.cpp` |
| 5 | different | 63.75 | 63.8889 | `candidate.cpp` |

## Outcome

Five released-source fast-vector construction variants reproduced allocation and null filling, but GCC2 uninitialized-fill loop padding did not match.
