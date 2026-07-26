# nglMeshWriteVertexPC__FfffUi

- Address: `0x003AA1B8`
- Size: `0xE0` (224 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.6429 | 55.3571 | `candidate.cpp` |
| 2 | different | 94.6429 | 85.7143 | `candidate.cpp` |
| 3 | different | 89.2857 | 87.5 | `candidate.cpp` |
| 4 | different | 95.5357 | 92.8571 | `candidate.cpp` |
| 5 | different | 51.7857 | 44.6429 | `candidate.cpp` |

### Attempt 1 notes

Compiled the exact released wrapper and inline `nglMeshFastWriteVertexPC` body with source-faithful batch fields and scratch globals. Function size and all data offsets matched, but unconstrained temporaries selected different integer registers and moved the color save before the batch-boundary branch, yielding 31/56 matching instructions.

### Attempt 2 notes

Expanded the inlined writer with source-level fixed registers matching the shipped batch pointer, scratch bases, indices, color, and saved float registers. This recovered 48/56 instructions and exact size; only the independent strip-pointer/`movn` order and the final two counter temporary registers remained swapped.

### Attempt 3 notes

Added explicit strip-condition/pointer constraints and fixed final counter registers. The counter tail matched, but the stronger barrier rotated constant/shift scheduling, swapped the multiply/store, and changed the X/Z store order, reducing overall agreement.

### Attempt 4 notes

Restored the strong attempt-2 schedule and fixed only the final scratch counter temporaries to `$v0/$v1`. This matched 52/56 instructions; the remaining differences were the order of the independent strip-pointer addition versus `movn`, and the independent X/Z position stores.

### Attempt 5 notes

Added pointer-only and memory scheduling barriers to force the last four independent instruction orders. The constraints perturbed the global scheduler, substantially reducing agreement. Attempt 4 remains the best exact-size candidate at 214/224 bytes and 52/56 instructions.

## Outcome

Deferred after five source-level attempts. The released mesh vertex writer, scratch layout, globals, and exact-sized inline expansion are recovered, but four independent pointer-add and position-store scheduling choices remain mismatched without forbidden instruction ordering.
