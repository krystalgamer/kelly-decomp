# KSMemAllocNGL__FUiUi

- Address: `0x001E31B8`
- Size: `0x70` (112 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.6786 | 71.4286 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released NGL allocation wrapper, minimum alignment, exact mesh/texture sizes, and diagnostic strings. Expressing the final size branch in the target layout matched on attempt 2.

## Outcome

Matched NGL memory allocator
