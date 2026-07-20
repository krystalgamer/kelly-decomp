# SetStepSize__15RungeKuttaClassf

- Address: `0x0026EB48`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ode.h`
- Reference source: `KS/SRC/ks/ode.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout preserves `stepSize` at 0x4 and the cached half/sixth steps at 0x10 and 0x14.

## Outcome

The released `RungeKuttaClass::SetStepSize` implementation matched exactly.
