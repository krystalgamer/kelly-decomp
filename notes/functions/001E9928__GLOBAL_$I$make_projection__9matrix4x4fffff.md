# _GLOBAL_$I$make_projection__9matrix4x4fffff

- Address: `0x001E9928`
- Size: `0x20` (32 bytes)
- Object: `game/files_hwosps2`
- Debug source: `../../ngl/ps2/vector_common.h`
- Reference source: `NGL/PS2/vector_common.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-panel-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-panel-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-panel-probes-3.cpp` |

## Outcome

Three direct forms collapse the generated initialization thunk to a 12-byte sibling call. The manual generated-symbol wrapper was removed and the target returned to raw text.
