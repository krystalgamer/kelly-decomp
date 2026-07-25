# construct_signal_list__9signaller

- Address: `0x0035FC68`
- Size: `0xA0` (160 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signals.h`
- Reference source: `KS/SRC/signals.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.75 | 31.5789 | `candidate.cpp` |
| 2 | different | 47.5 | 36.1111 | `candidate.cpp` |
| 3 | different | 61.25 | 58.3333 | `candidate.cpp` |
| 4 | different | 61.25 | 58.3333 | `candidate.cpp` |
| 5 | different | 31.25 | 8.1081 | `candidate.cpp` |

## Outcome

Five released fast_vector construction variants reproduced zero-sized allocation and fill semantics but not GCC2 uninitialized-fill scheduling.
