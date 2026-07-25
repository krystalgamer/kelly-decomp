# guarantee_active__21world_dynamics_systemP6entity

- Address: `0x002A6F08`
- Size: `0xB4` (180 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.5556 | 4.4444 | `candidate.cpp` |
| 2 | different | 53.8889 | 28.8889 | `candidate.cpp` |
| 3 | different | 53.8889 | 28.8889 | `candidate.cpp` |
| 4 | different | 67.2222 | 37.7778 | `candidate.cpp` |
| 5 | different | 25.0 | 2.1739 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used a shared guaranteed-active vector at its target field offset, but the reduced STL declaration selected the non-dispatched find symbol and emitted push_back out of line.

### Attempt 2 notes

Restoring the released random-access iterator dispatch fixed both find calls, while the supplied EE GCC still declined to inline the released vector push_back.

### Attempt 3 notes

The historical EE GCC ignored an always-inline attribute on the shared vector append.

### Attempt 4 notes

Expanding the released append through shared vector accessors restored its branch logic, but swapped the two saved object registers and reused the local finish pointer instead of reloading it.

### Attempt 5 notes

Binding the world and vector objects and forcing a finish reload enlarged the frame. No per-function vector layout was introduced.

## Outcome

Deferred guaranteed-active entity insertion after five source-level attempts; released shared STL context could not reproduce push_back inlining and saved-register allocation.
