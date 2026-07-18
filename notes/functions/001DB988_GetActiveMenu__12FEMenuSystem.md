# GetActiveMenu__12FEMenuSystem

- Address: `0x001DB988`
- Size: `0x18` (24 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the released accessor indexes the menu pointer array at `0x74` using active index `0x7C`.

## Outcome

The released `FEMenuSystem::GetActiveMenu` indexed load matched exactly on the first attempt.
