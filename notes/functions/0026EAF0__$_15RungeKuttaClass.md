# _$_15RungeKuttaClass

- Address: `0x0026EAF0`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/ode.h`
- Reference source: `KS/SRC/ks/ode.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.2727 | 22.7273 | `runge-dtor-1.cpp` |
| 2 | different | 27.2727 | 22.7273 | `runge-dtor-2.cpp` |
| 3 | different | 27.2727 | 22.7273 | `runge-dtor-3.cpp` |

## Outcome

Three released-source RungeKutta destructor forms generated a different virtual cleanup sequence; the manual vtable/destructor wrapper was removed.
