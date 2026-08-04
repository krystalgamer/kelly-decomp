# _GLOBAL_$D$ksGlobalTextArray

- Address: `0x001DE660`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `lightmgr.h`
- Reference source: `KS/SRC/lightmgr.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-panel-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-panel-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-panel-probes-3.cpp` |

## Outcome

Three direct forms collapse the generated destruction thunk to a 12-byte sibling call. The manual generated-symbol wrapper was removed and the target returned to raw text.
