# __nw__FUiUiPCci

- Address: `0x002AC578`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released placement-like allocation overload ignores alignment and forwards size/file/line with zero flags.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The four-argument global operator new matched exactly.
