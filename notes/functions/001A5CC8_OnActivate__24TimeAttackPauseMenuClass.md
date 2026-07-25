# OnActivate__24TimeAttackPauseMenuClass

- Address: `0x001A5CC8`
- Size: `0x94` (148 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.9459 | 83.7838 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Reconstructed the released old-highlight preservation, Init dispatch, disabled check, setHigh(false), and HighlightDefault paths. Register-bound virtual call targets reproduce the original EE ABI allocation.

## Outcome

Matched time attack pause activation
