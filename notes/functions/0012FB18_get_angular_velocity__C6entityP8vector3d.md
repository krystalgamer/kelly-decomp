# get_angular_velocity__C6entityP8vector3d

- Address: `0x0012FB18`
- Size: `0x28` (40 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.6667 | 25.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The implicit assignment used a 64-bit aggregate copy instead of the target scalar zero-vector stores.

### Attempt 2 notes

The base entity implementation materializes a zero vector locally and copies it to the output.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released base angular-velocity implementation matched exactly.
