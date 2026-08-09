# hasPrevious__FP6FEMenu

- Address: `0x001A4EF8`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.2308 | 23.0769 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size48-frontend-core.cpp` |

### Attempt 2 notes

The shared frontend menu declarations preserve the highlighted-entry load,
wrap flag check, entries comparison, and previous-pointer test.

## Outcome

The released `hasPrevious` frontend helper matched exactly on attempt two.
