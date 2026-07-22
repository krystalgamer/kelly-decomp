# OnRight__13CheatFrontEndi

- Address: `0x001D19E0`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.5 | 90.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Immutable source packet: when an active submenu exists, forward OnRight(command); otherwise call FEMultiMenu::OnRight(command). Shared vtable dispatch models the original multiple-inheritance fallback exactly.

## Outcome

CheatFrontEnd::OnRight(int)
