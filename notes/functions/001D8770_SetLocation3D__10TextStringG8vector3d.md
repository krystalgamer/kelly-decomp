# SetLocation3D__10TextStringG8vector3d

- Address: `0x001D8770`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.7778 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

A POD-only vector definition caused EE GCC to copy the by-value parameter in the callee. Restoring the released user-defined copy constructor reproduced the original caller-side aggregate ABI and empty body.

## Outcome

The released empty `TextString::SetLocation3D` hook matched on the second attempt after restoring `vector3d`'s user-defined copy constructor and original aggregate ABI.
