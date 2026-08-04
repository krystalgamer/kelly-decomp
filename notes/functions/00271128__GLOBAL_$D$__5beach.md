# _GLOBAL_$D$__5beach

- Address: `0x00271128`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-gameplay-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-gameplay-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-gameplay-probes-3.cpp` |

## Outcome

Three direct forms collapse the generated destruction thunk to a 12-byte sibling call. The manual generated-symbol wrapper was removed and the target returned to raw text.
