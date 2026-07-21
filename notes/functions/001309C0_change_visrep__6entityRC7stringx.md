# change_visrep__6entityRC7stringx

- Address: `0x001309C0`
- Size: `0x40` (64 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 75.0 | `candidate.cpp` |
| 2 | different | 78.125 | 68.75 | `candidate.cpp` |
| 3 | different | 81.25 | 75.0 | `candidate.cpp` |
| 4 | different | 81.25 | 75.0 | `candidate.cpp` |
| 5 | different | 81.25 | 75.0 | `candidate.cpp` |

### Attempt 1 notes

Authentic unload/find/assign variants matched the body but could not reproduce the target saved-register prologue schedule.

### Attempt 2 notes

Authentic unload/find/assign variants matched the body but could not reproduce the target saved-register prologue schedule.

### Attempt 3 notes

Authentic unload/find/assign variants matched the body but could not reproduce the target saved-register prologue schedule.

### Attempt 4 notes

Authentic unload/find/assign variants matched the body but could not reproduce the target saved-register prologue schedule.

### Attempt 5 notes

Authentic unload/find/assign variants matched the body but could not reproduce the target saved-register prologue schedule.

## Outcome

Authentic visual-replacement forms consistently differ only in saved-register prologue scheduling; deferred after five attempts.
