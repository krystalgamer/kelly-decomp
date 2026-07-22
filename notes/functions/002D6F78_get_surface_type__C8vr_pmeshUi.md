# get_surface_type__C8vr_pmeshUi

- Address: `0x002D6F78`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 27.7778 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Released face/reduced-face lookup was reconstructed in shared pmesh declarations. Reversing the equivalent null test reproduced the target branch layout after the source-faithful first form selected the opposite block order.
