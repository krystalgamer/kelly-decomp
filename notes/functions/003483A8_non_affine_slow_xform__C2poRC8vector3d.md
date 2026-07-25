# non_affine_slow_xform__C2poRC8vector3d

- Address: `0x003483A8`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.625 | 10.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Used the exact released matrix-vector products and restored vector3d’s released scalar copy constructor. That eliminated aggregate ldl/ldr copies and matched the hidden-return stores exactly.

## Outcome

Matched non-affine slow transform
