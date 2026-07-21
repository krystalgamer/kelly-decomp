# Draw__12TipMenuClass

- Address: `0x001B25E8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released FEMenu base draw followed by the tip BoxText's third-slot virtual Draw dispatch matched exactly with the recovered tip offset 0x78.

## Outcome

The released tip menu draw exactly matches the FEMenu base call and authentic BoxText Draw dispatch at the recovered member offset.
