# point_inside__16rectangle_markerRC8vector3d

- Address: `0x0028C510`
- Size: `0xBC` (188 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/marker.cpp`
- Reference source: `KS/SRC/marker.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 11.3636 | 0.0 | `candidate.cpp` |
| 3 | different | 28.7234 | 4.2553 | `candidate.cpp` |
| 4 | different | 59.0426 | 25.5319 | `candidate.cpp` |
| 5 | different | 59.0426 | 25.5319 | `candidate.cpp` |

### Attempt 1 notes

The first source-faithful declaration emitted the wrong vector type ABI name.

### Attempt 2 notes

Resolving the ABI name left non-inlined vector helper calls and 308 bytes.

### Attempt 3 notes

Direct scalar math removed helper calls but optimized away the target delta
stack object.

### Attempt 4 notes

An explicit local delta recovered the target size but not floating scheduling.

### Attempt 5 notes

Sharing the absolute pose reference retained the same final mismatch.

## Outcome

Five source-level variants reproduced rectangle containment semantics and target size, but the original vector temporary and floating-point scheduling did not match.
