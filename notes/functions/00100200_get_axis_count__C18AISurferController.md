# get_axis_count__C18AISurferController

- Address: `0x00100200`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.cpp`
- Reference source: `KS/SRC/AIController.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released implementation returns `JOY_PS2_NUM_AXES`. The target constant
is `23`, and the minimal C++ method matched both instructions on the first
compile.

## Outcome

The released AISurferController::get_axis_count() implementation returns the PS2 axis count constant. A minimal class declaration with return 23 matched byte-for-byte on the first attempt, and the source-driven full build retained the target ROM SHA-1.
