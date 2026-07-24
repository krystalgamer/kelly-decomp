# _nglSetDisplay__Fv

- Address: `0x00396DB0`
- Size: `0x70` (112 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.0357 | 42.8571 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released display reset sequence, TV mode constants, VRAM clear, and flip call. Correcting the TV-mode global and preserving the final call matched on attempt 2.

## Outcome

Matched NGL display setup
