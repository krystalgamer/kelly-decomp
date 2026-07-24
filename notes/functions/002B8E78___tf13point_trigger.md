# __tf13point_trigger

- Address: `0x002B8E78`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.h`
- Reference source: `KS/SRC/trigger.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.6471 | 79.4118 | `candidate.cpp` |
| 2 | different | 17.6471 | 0.0 | `candidate.cpp` |
| 3 | different | 18.5714 | 5.7143 | `candidate.cpp` |
| 4 | different | 77.9412 | 67.6471 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released point-trigger RTTI helper after five source-level attempts; signaller-to-trigger-to-point-trigger RTTI initialization was reconstructed, but generated high-address register materialization remained different.
