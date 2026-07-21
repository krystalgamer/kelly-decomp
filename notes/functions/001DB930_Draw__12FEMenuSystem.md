# Draw__12FEMenuSystem

- Address: `0x001DB930`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the released active-menu lookup and virtual Draw dispatch with recovered FEMenuSystem and FEMenu vtable layouts. All 60 bytes matched on the first attempt.

## Outcome

The released FEMenuSystem draw exactly matches the active-menu array lookup and authentic virtual FEMenu Draw dispatch.
