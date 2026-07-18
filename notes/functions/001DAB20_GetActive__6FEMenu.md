# GetActive__6FEMenu

- Address: `0x001DAB20`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target inline accessor returns the active submenu pointer from offset `0x60`, consistent with the released FEMenu layout.

## Outcome

The reconstructed `FEMenu::GetActive` pointer getter matched exactly on the first attempt.
