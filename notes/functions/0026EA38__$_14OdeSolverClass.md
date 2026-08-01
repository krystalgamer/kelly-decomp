# _$_14OdeSolverClass

- Address: `0x0026EA38`
- Size: `0x30` (48 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ode.h`
- Reference source: `KS/SRC/ks/ode.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.8333 | 8.3333 | `base-dtor-1.cpp` |
| 2 | different | 20.8333 | 8.3333 | `base-dtor-2.cpp` |
| 3 | different | 18.75 | 0.0 | `base-dtor-3.cpp` |

## Outcome

Three native OdeSolverClass destructor forms did not reproduce the legacy deleting-destructor sequence; the manual vtable wrapper was removed.
