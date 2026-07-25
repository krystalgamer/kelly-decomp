# construct_signal_list__4item

- Address: `0x002B8668`
- Size: `0xA0` (160 bytes)
- Object: `game/files_misc1`
- Debug source: `item.h`
- Reference source: `KS/SRC/item.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 42.1053 | `candidate.cpp` |
| 2 | different | 63.75 | 63.8889 | `candidate.cpp` |
| 3 | different | 63.75 | 63.8889 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 62.5 | 37.5 | `candidate.cpp` |

## Outcome

Five released-source fast-vector variants reproduced allocation and null filling, but GCC2 uninitialized-fill padding did not match.
