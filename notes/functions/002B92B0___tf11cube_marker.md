# __tf11cube_marker

- Address: `0x002B92B0`
- Size: `0xB4` (180 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/marker.h`
- Reference source: `KS/SRC/marker.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.7778 | 2.2222 | `candidate.cpp` |
| 2 | different | 17.7778 | 2.2222 | `candidate.cpp` |
| 3 | different | 68.8889 | 53.3333 | `candidate.cpp` |
| 4 | different | 52.1739 | 34.7826 | `candidate.cpp` |
| 5 | different | 68.8889 | 53.3333 | `candidate.cpp` |

### Attempt 1 notes

The exact released cube_marker -> rectangle_marker -> marker -> entity inheritance and nested shared RTTI helpers reproduced the initialization calls, but used the reduced three-register materialization and emitted eight fewer bytes.

### Attempt 2 notes

Assigning the generated marker and rectangle helper symbol names did not change their inlining or register allocation.

### Attempt 3 notes

Constraining the cube typeinfo pointer restored target size, but materialized the full pointer early and rotated the rectangle and marker saved registers.

### Attempt 4 notes

Expressing all target hierarchy registers directly added one instruction and still rematerialized the typeinfo addresses around calls.

### Attempt 5 notes

The released marker-header line context retained the same constrained-pointer schedule. Exact inheritance was inspected and no local class recreation was retained.

## Outcome

Deferred cube-marker RTTI after five source-level attempts; exact released inheritance and nested shared RTTI initialization did not reproduce original typeinfo register materialization.
