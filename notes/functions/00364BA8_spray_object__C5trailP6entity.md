# spray_object__C5trailP6entity

- Address: `0x00364BA8`
- Size: `0x74` (116 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.3103 | 68.9655 | `candidate.cpp` |
| 2 | different | 58.6207 | 48.2759 | `candidate.cpp` |
| 3 | different | 79.3103 | 68.9655 | `candidate.cpp` |
| 4 | different | 79.3103 | 68.9655 | `candidate.cpp` |
| 5 | different | 86.2069 | 58.6207 | `candidate.cpp` |

## Outcome

Deferred trail spray-object testing after five source-level attempts; the released two control-array checks and early-success behavior reproduced, but the target branch-specific epilogue scheduling did not.
