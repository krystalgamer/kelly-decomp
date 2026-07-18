# __nw__t11linear_anim1ZfUiUiPCci

- Address: `0x0011A078`
- Size: `0x1C` (28 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released float animation allocation overload delegates to its one-argument allocator.

## Outcome

The released `linear_anim<float>::operator new` wrapper matched exactly on the first attempt.
