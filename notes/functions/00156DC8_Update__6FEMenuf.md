# Update__6FEMenuf

- Address: `0x00156DC8`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released FEMenu::Update loop and FEMenuEntry declarations. Reconstructed the entry next pointer and shared virtual Update dispatch slots at 0x40/0x44.

## Outcome

Matched released FEMenu::Update body
