# _$_18AISurferController

- Address: `0x00112CE0`
- Size: `0x28` (40 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.h`
- Reference source: `KS/SRC/AIController.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-derived-dtors.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-derived-dtors-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-derived-dtors-3.cpp` |

## Outcome

Across three ordinary native definitions, the compiler-generated destructor collapses to a vptr-setting tail call. The closest candidate is
20 bytes rather than the target 40 bytes, so the matching-only body was
removed and the target function was deferred.
