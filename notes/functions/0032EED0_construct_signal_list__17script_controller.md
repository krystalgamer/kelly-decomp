# construct_signal_list__17script_controller

- Address: `0x0032EED0`
- Size: `0xA0` (160 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_controller.h`
- Reference source: `KS/SRC/script_lib_controller.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 51.25 | 42.1053 | `candidate.cpp` |
| 2 | different | 65.0 | 63.8889 | `candidate.cpp` |
| 3 | different | 65.0 | 63.8889 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 63.75 | 37.5 | `candidate.cpp` |

## Outcome

Five released-source fast-vector variants reproduced allocation and null filling, but GCC2 uninitialized-fill padding did not match.
