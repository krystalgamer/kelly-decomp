# _GLOBAL_$I$TRAIL_StaticInit__Fv

- Address: `0x00385388`
- Size: `0x20` (32 bytes)
- Object: `game/files_wave`
- Debug source: `particle.h`
- Reference source: `KS/SRC/particle.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-last-thunks-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-last-thunks-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-last-thunks-3.cpp` |

## Outcome

Three direct forms collapse the generated initialization thunk to a 12-byte sibling
call. The manual generated-symbol wrapper was removed and the target returned
to raw text.
