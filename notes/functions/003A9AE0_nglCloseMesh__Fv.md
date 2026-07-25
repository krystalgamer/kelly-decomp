# nglCloseMesh__Fv

- Address: `0x003A9AE0`
- Size: `0x9C` (156 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.7949 | 43.5897 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Restored mesh size finalization, temporary alignment, permanent allocation/copy/rebase, and corrected the released branch layout and C++ linkage.

## Outcome

Matched NGL mesh closing
