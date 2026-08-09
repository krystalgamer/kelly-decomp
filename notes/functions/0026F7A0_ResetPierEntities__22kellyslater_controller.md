# ResetPierEntities__22kellyslater_controller

- Address: `0x0026F7A0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/kellyslater_controller.h`
- Reference source: `KS/SRC/ks/kellyslater_controller.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.8182 | 44.4444 | `candidate.cpp` |
| 2 | different | 25.0 | 22.2222 | `candidate.cpp` |
| 3 | different | 81.8182 | 44.4444 | `candidate.cpp` |

### Attempt 1 notes

The released descending loop schedules the pointer decrement before the
backedge.

### Attempt 2 notes

The branch-shaped form shrinks to 36 bytes.

### Attempt 3 notes

The indexed descending loop retains the same backedge scheduling mismatch.

## Outcome

The prior match depended on compiler barriers. They were removed and the
function was deferred.
