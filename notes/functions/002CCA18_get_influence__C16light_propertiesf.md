# get_influence__C16light_propertiesf

- Address: `0x002CCA18`
- Size: `0x70` (112 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.6071 | 53.5714 | `candidate.cpp` |
| 2 | different | 57.1429 | 50.0 | `candidate.cpp` |
| 3 | different | 57.1429 | 50.0 | `candidate.cpp` |
| 4 | different | 62.5 | 50.0 | `candidate.cpp` |
| 5 | different | 61.6071 | 53.5714 | `candidate.cpp` |

## Outcome

Deferred light influence calculation after five source-level attempts; the released attenuation math reproduced, but the target second FPU branch hazard and out-of-line zero path did not.
