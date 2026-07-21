# Draw__19MultiControllerMenu

- Address: `0x00184D00`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the controller menu draw as the FEMenu base draw followed by the stored TextString's authentic third-slot virtual Draw dispatch. The recovered member offset 0x84 matched all 60 bytes.

## Outcome

The controller menu draw exactly matches the FEMenu base call and third-slot TextString Draw dispatch with the recovered member offset.
