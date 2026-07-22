# OnLeft__13CheatFrontEndi

- Address: `0x001D1990`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.0 | 10.0 | `candidate.cpp` |
| 2 | different | 20.0 | 10.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Immutable source packet: when an active submenu exists, forward OnLeft(command); otherwise call FEMultiMenu::OnLeft(command). Reused the shared CheatFrontEnd/FEMultiMenu context.

## Outcome

CheatFrontEnd::OnLeft(int)
