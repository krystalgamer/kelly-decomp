# __nw__t11linear_anim1Z10quaternionUiUiPCci

- Address: `0x00119BF8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released quaternion animation allocation overload delegates to its one-argument allocator. Using template-compatible empty asm syntax matched on attempt two.

## Outcome

The released `linear_anim<quaternion>::operator new` wrapper matched on attempt two.
