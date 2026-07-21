# KSDebugPrint__FPCc

- Address: `0x001E3130`
- Size: `0x38` (56 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.7143 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 94.6429 | 85.7143 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released ProView branch selects `snputs`; the normal path selects `scePrintf`. Expressing the first path as an early return preserves the target's separate restore sites, while empty matching barriers prevent either call from becoming a sibling tail call. The carried global alias reproduces the negative-low address.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The PS2 debug-print dispatcher matches with its released ProView selection and normal-call control flow.
