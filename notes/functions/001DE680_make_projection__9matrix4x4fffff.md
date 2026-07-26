# make_projection__9matrix4x4fffff

- Address: `0x001DE680`
- Size: `0xCC` (204 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_algebra.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_algebra.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 80.3922 | 80.3922 | `candidate.cpp` |
| 2 | different | 56.8627 | 33.3333 | `candidate.cpp` |
| 3 | different | 67.1569 | 54.902 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 80.3922 | 80.3922 | `candidate.cpp` |

## Outcome

The released projection calculations reached 80.39%, but the callee-save scheduling around tanf remained irreducible after five source-level attempts.
