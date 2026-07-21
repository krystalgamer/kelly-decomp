# Draw__20QuitConfirmMenuClass

- Address: `0x001B2990`
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

The released FEMenu base draw followed by the question BoxText's third-slot virtual Draw dispatch matched exactly with the recovered question offset 0x7c.

## Outcome

The released quit-confirmation draw exactly matches the FEMenu base call and authentic question BoxText Draw dispatch.
