# Add__15FEGraphicalMenuP11FEMenuEntry

- Address: `0x001DB140`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline override forwards directly to `FEMenu::Add`; a barrier prevents a sibling call.

## Outcome

The inline `FEGraphicalMenu::Add` wrapper matched exactly on the first attempt.
