# SetLocation3D__7BoxTextG8vector3d

- Address: `0x0014A788`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.8333 | 5.5556 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a by-value aggregate-copy or FPU hazard scheduling mismatch.

### Attempt 2 notes

A minimal layout places the four-component location at offset 0x90 and preserves the homogeneous W value.

## Outcome

The released `BoxText::SetLocation3D` setter matched exactly.
