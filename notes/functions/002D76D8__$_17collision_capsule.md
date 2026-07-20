# _$_17collision_capsule

- Address: `0x002D76D8`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.cpp`
- Reference source: `KS/SRC/capsule.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving destructor restores the parent vtable before delegating the `collision_capsule` object to its base.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `collision_capsule` destructor matched exactly.
