# nglSetMeshFlags__FUi

- Address: `0x003AA9B0`
- Size: `0x24` (36 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.8889 | 66.6667 | `candidate.cpp` |
| 2 | different | 86.1111 | 44.4444 | `candidate.cpp` |
| 3 | different | 94.4444 | 77.7778 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a register-selection, global carry, conversion, or OR-association mismatch.

### Attempt 2 notes

The second candidate isolated the remaining return, conversion, or register-allocation mismatch.

### Attempt 3 notes

Register shaping fixed the OR chain but materialized the scratch-mesh global in v0 instead of target v1.

### Attempt 4 notes

The released setter combines requested flags with the preserved 0x1000 bit and required 0x400000 scratch-mesh flag.

## Outcome

The released `nglSetMeshFlags` implementation matched exactly.
