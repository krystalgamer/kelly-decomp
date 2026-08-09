# Init_Filter__12float_filterf

- Address: `0x00229F68`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 0.0 | `candidate.cpp` |
| 2 | different | 86.3636 | 54.5455 | `candidate.cpp` |
| 3 | different | 29.5455 | 55.5556 | `candidate.cpp` |

### Attempt 1 notes

The exact released for-loop expands to 52 bytes.

### Attempt 2 notes

The pointer do-while form keeps the target size but differs in loop scheduling.

### Attempt 3 notes

The goto form shrinks to 36 bytes and omits the target scheduler slots.

## Outcome

The prior match depended on an instruction nop and compiler barriers. Those
were removed and the function was deferred.
