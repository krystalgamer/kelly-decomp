# set_defaults__8material

- Address: `0x003394C0`
- Size: `0x78` (120 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/material.cpp`
- Reference source: `KS/SRC/material.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 86.6667 | `candidate.cpp` |
| 2 | different | 96.6667 | 93.3333 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released four-map string reset matched after restoring the exact material field order and keeping the mat_flags zero store ahead of the float resets.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released material default reset matched exactly on the third attempt.
