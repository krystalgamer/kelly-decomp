# OnUp__6FEMenui

- Address: `0x001DAA30`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.5 | 90.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Immutable FEMenu.h packet: if active, forward OnUp(command); otherwise call Previous().

## Outcome

FEMenu::OnUp(int)
