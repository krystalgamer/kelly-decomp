# SetStepSize__14OdeSolverClassf

- Address: `0x0026EA68`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ode.h`
- Reference source: `KS/SRC/ks/ode.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline method assigns `stepSize = value` at offset `0x4`.

## Outcome

The released `OdeSolverClass::SetStepSize` setter matched exactly on the first attempt.
