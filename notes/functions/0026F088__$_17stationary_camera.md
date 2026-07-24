# _$_17stationary_camera

- Address: `0x0026F088`
- Size: `0x70` (112 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ks_camera.h`
- Reference source: `KS/SRC/ks/ks_camera.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.7143 | 82.1429 | `candidate.cpp` |
| 2 | different | 85.7143 | 82.1429 | `candidate.cpp` |
| 3 | different | 56.0345 | 34.4828 | `candidate.cpp` |
| 4 | different | 85.7143 | 82.1429 | `candidate.cpp` |
| 5 | different | 32.7586 | 17.2414 | `candidate.cpp` |

## Outcome

Deferred stationary camera destructor after five source-level attempts; the released list teardown and camera base destruction reproduced, but the target prologue and member-destructor call scheduling did not.
