# OnDown__6FEMenui

- Address: `0x001DAA80`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Immutable FEMenu.h body forwards OnDown(command) to active when present and otherwise calls Next(). The shared FEMenu next-dispatch context reproduces the target vtable slot exactly.

## Outcome

FEMenu::OnDown(int)
