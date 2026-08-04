# _GLOBAL_$D$anim_track_flavors

- Address: `0x00121D28`
- Size: `0x20` (32 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-first-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-first-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-first-probes-3.cpp` |

## Outcome

Three direct source forms collapse the generated destruction thunk to a 12-byte sibling call. The target retains a 32-byte frame, and the manual `extern "C"` wrapper was removed.
