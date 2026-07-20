# arch_memalign__FUiUiPCci

- Address: `0x002AC740`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.5 | 90.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The control flow and call schedule matched, but the default-description alias needed the carried `%hi` spelling for its negative low half.

### Attempt 2 notes

The released aligned allocator substitutes its default description and forwards zero allocation flags.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `arch_memalign` implementation matched exactly.
