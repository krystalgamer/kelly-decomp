# ReadVector2d__FR8vector2dPUcRi

- Address: `0x001536F8`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 59.0909 | `candidate.cpp` |
| 2 | different | 79.5455 | 77.2727 | `candidate.cpp` |
| 3 | different | 40.0 | 20.0 | `candidate.cpp` |
| 4 | different | 27.0 | 4.0 | `candidate.cpp` |
| 5 | different | 79.5455 | 77.2727 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released ReadVector2d body, vector layout, and ReadFloat helper. The compiler assigned destination/index to opposite callee-saved registers and scheduled the first store before second-call argument setup.

### Attempt 2 notes

Constrained destination, source, and index to the target s2/s1/s0 registers. Size matched and improved to 79.55%, but ra/index copy and first-store/call setup remained reordered.

### Attempt 3 notes

Moved the fixed-register constraint to the end to allow prologue scheduling. This extended fixed-register lifetimes and caused spills/growth.

### Attempt 4 notes

Used input-only fixed-register constraints at entry. The old compiler again spilled and grew the function.

### Attempt 5 notes

Restored the closest fixed-register form with an explicit result cast. The remaining equivalent scheduling differences persisted.

## Outcome

Released ReadVector2d remained blocked by equivalent callee-save and second-call scheduling after five source-level attempts.
