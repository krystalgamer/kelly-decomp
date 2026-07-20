# arch_mallochigh__FUi

- Address: `0x002AC718`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.5 | 70.0 | `candidate.cpp` |
| 2 | different | 80.0 | 80.0 | `candidate.cpp` |
| 3 | different | 29.5455 | 18.1818 | `candidate.cpp` |
| 4 | different | 65.0 | 60.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The direct absolute alias missed the required `%hi` carry and also scheduled the low-half add before the RA save.

### Attempt 2 notes

Carrying the absolute alias fixed the address but left the low-half add ahead of the target RA-save slot.

### Attempt 3 notes

Splitting a page alias from the negative offset preserved the desired dependency but emitted an extra `addiu ...,0`, increasing the function to 44 bytes.

### Attempt 4 notes

A raw integer pointer let GCC fold the final address into `lui`/`ori` and moved the RA save ahead of address formation.

### Attempt 5 notes

The released high allocator forwards the default description and `mafHigh` flag to `mem_malloc`. A matching-only register constraint emits no instruction; it keeps the absolute page base live so EE GCC schedules the RA save between the target's high- and low-half address operations.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released one-argument `arch_mallochigh` implementation matched exactly.
