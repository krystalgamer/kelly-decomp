# OnOpen__16MenuParticleDrawP4MenuP10MenuSystem

- Address: `0x0030EFE0`
- Size: `0x94` (148 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.7027 | 64.8649 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact eight-entry particle getter loop and base Menu::OnOpen call. Correcting negative-low global nominal addresses and blocking the tail call matched exactly.

## Outcome

Matched particle draw menu opening
