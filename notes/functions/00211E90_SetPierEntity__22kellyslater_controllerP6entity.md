# SetPierEntity__22kellyslater_controllerP6entity

- Address: `0x00211E90`
- Size: `0x84` (132 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.8571 | 0.0 | `candidate.cpp` |
| 2 | different | 81.0606 | 72.7273 | `candidate.cpp` |
| 3 | different | 84.8485 | 81.8182 | `candidate.cpp` |
| 4 | different | 13.5714 | 2.8571 | `candidate.cpp` |
| 5 | different | 93.9394 | 93.9394 | `candidate.cpp` |

## Outcome

Deferred the pier-entity registration helper after five source-level attempts; the duplicate suppression and three-entry insertion logic were reproduced, but two loop-scheduling instructions remained different.
