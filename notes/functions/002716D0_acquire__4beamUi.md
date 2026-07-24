# acquire__4beamUi

- Address: `0x002716D0`
- Size: `0x74` (116 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.5517 | 93.1034 | `candidate.cpp` |
| 2 | different | 75.8621 | 72.4138 | `candidate.cpp` |
| 3 | different | 94.8276 | 86.2069 | `candidate.cpp` |
| 4 | different | 77.5862 | 72.4138 | `candidate.cpp` |
| 5 | different | 95.6897 | 89.6552 | `candidate.cpp` |

## Outcome

Deferred beam acquisition reset after five source-level attempts; all released calls and field resets reproduced, but the target final zero-store scheduling did not.
