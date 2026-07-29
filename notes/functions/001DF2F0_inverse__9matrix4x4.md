# inverse__9matrix4x4

- Address: `0x001DF2F0`
- Size: `0x258` (600 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_algebra.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_algebra.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.8333 | 7.3333 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 115 lane A5

Exact released `matrix4x4::inverse()` body tested once for `0x001DF2F0 inverse__9matrix4x4` with minimal self-contained declarations and the released inline scalar `operator*=`. Result `different`: byte score 20.8333%, instruction score 7.3333% (125/600 bytes; 11/150 instructions), emitted size 440 versus target 600. No retry, variant, diff chase, build, finalize, integration, git mutation, or tracked edit.

## Outcome

The exact released matrix inversion body differed at 20.8333% byte score; no source variant was attempted.
