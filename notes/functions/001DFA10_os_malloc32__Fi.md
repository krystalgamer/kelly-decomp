# os_malloc32__Fi

- Address: `0x001DFA10`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_alloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_alloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The aligned platform wrapper forwards size, its target source label, and line zero to `arch_malloc`.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `os_malloc32` wrapper matched exactly.
