# preload__16destroyable_info

- Address: `0x001375B0`
- Size: `0x38` (56 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.5 | 0.0 | `candidate.cpp` |
| 2 | different | 36.6667 | 20.0 | `candidate.cpp` |
| 3 | different | 89.2857 | 71.4286 | `candidate.cpp` |
| 4 | different | 89.2857 | 71.4286 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used a direct unsigned-short flag test/set and preload call. EE GCC reused the first flag load and tail-called exec_preload_function, producing 40 bytes.

### Attempt 2 notes

Modeled the released helper methods and added a trailing KELLY_DECOMP_COMPILER_BARRIER. The bool helper materialized bit 9 with shift/mask instructions and produced 60 bytes.

### Attempt 3 notes

Returned the raw flag mask from the query helper and placed a KELLY_DECOMP_COMPILER_BARRIER before setting it. This reached 89.29%, but restored `ra` in the skip-branch delay slot and reused the original flag load.

### Attempt 4 notes

Used a direct signed-short flag expression with only the trailing barrier. The compiler emitted the same 89.29% sequence as attempt 3.

### Attempt 5 notes

The released preload-run flag test/set and script invocation matched exactly. Explicit signed/unsigned locals preserve the target signed test load and unsigned update reload; KELLY_DECOMP_COMPILER_BARRIER() prevents a sibling tail call and emits no target instruction.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released destroyable-info preload matched exactly.
