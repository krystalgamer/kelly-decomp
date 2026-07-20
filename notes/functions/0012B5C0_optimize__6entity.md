# optimize__6entity

- Address: `0x0012B5C0`
- Size: `0x34` (52 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 15.3846 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released visual-representation null/type checks and pmesh shrink call. EE GCC converted the final call into a sibling tail jump, eliminating the target stack frame and producing 40 bytes.

### Attempt 2 notes

The released pmesh-only optimization matched exactly with `my_visrep` at offset 0x128. The trailing empty barrier prevents EE GCC from replacing `shrink_memory_footprint` with a sibling tail jump.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released entity optimization method matched exactly with the pmesh shrink call.
