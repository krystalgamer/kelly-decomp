# Load__13BoardFrontEnd

- Address: `0x001B5B60`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BoardFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BoardFrontEnd.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 85.0 | `candidate.cpp` |
| 2 | different | 95.0 | 90.0 | `candidate.cpp` |
| 3 | different | 95.0 | 90.0 | `candidate.cpp` |

### Attempt 1 notes

Luna attempt 1: tested the immutable FEMultiMenu::Load followed by SetPQIndices source with shared Board layout context. The candidate remained non-exact; assembly artifacts record the mismatch.

### Attempt 2 notes

Luna attempt 2: tested the immutable FEMultiMenu::Load followed by SetPQIndices source with shared Board layout context. The candidate remained non-exact; assembly artifacts record the mismatch.

### Attempt 3 notes

Luna attempt 3: scheduling annotation did not reproduce the target prologue save order; target saves ra before s0 while candidate saves s0 before ra.

## Outcome

deferred BoardFrontEnd Load after three Luna attempts
