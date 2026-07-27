# _$_16geometry_manager

- Address: `0x002CB1F0`
- Size: `0xF0` (240 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/geomgr.cpp`
- Reference source: `KS/SRC/geomgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 24.5833 | 12.5 | `candidate.cpp` |
| 5 | different | 24.5833 | 12.5 | `candidate.cpp` |

## Outcome

Deferred after five distinct attempts. The destructor inlines hull vector destruction and custom allocator deallocation; standalone reconstructions emitted the member destructor out of line instead of the target inline sequence.
