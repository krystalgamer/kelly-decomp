# OpenMenu__10MenuRenderP4Menu

- Address: `0x002409D0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.75 | 75.0 | `candidate.cpp` |
| 2 | different | 9.6774 | 0.0 | `candidate.cpp` |
| 3 | different | 27.3810 | 9.5238 | `candidate.cpp` |
| 4 | different | 77.5 | 75.0 | `candidate.cpp` |
| 5 | different | 77.5 | 75.0 | `candidate.cpp` |

## Attempt notes

The immutable body was found in `menusys.cpp` after the scout packet's
missing-body report.  The shared renderer declaration now preserves the
released rectangles, text/state arrays, counters, and virtual interface.
The exact `memcpy`/`strcpy` loop reproduces the body except for the literal
relocation and loop delay slot.  Source-level empty-string aliases resolve the
retail address and all operations, but EE GCC emits the state-pointer increment
before the branch and leaves a nop delay slot instead of using the target slot.

## Outcome

Deferred after five source-only attempts due the remaining loop scheduling
mismatch; the complete released behavior and shared layout are recovered.
