# Load__15FEGraphicalMenu

- Address: `0x001DB0D0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal frontend vtable layout preserves the virtual graphical menu load adjustment/function slots and null forwarded argument.

## Outcome

The released `FEGraphicalMenu::Load` wrapper matched exactly.
