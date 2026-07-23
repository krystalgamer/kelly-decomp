# TurnOn__15FEGraphicalMenuP9PanelQuadb

- Address: `0x001DB160`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released FEGraphicalMenu::TurnOn remap, parent/panel offsets, parent TurnOn slot, PanelQuad TurnOn slot, and null handling. Preserving the exact old mangling with a source-faithful alias matched on attempt 2.

## Outcome

Matched released FEGraphicalMenu TurnOn remap
