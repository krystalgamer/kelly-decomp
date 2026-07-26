# update_unused_velocity__18physical_interfacef

- Address: `0x00125070`
- Size: `0xC0` (192 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/physical_interface.cpp`
- Reference source: `KS/SRC/physical_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.1429 | 34.6939 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released logic and layout were correct, but the reduced `vector3d`
declaration used an implicit aggregate assignment that emitted unaligned
64-bit copies.

### Attempt 2 notes

Restoring the released component-wise `vector3d` assignment matched the
velocity calculation and zero-vector fallback exactly.

## Outcome

Matched the released fallback velocity calculation with shared entity and vector declarations.
