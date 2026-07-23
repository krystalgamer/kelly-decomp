# _$_10PanelQuad4

- Address: `0x001D9C10`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released PanelQuad4 inheritance/declaration and generated destructor. Reconstructed the PanelQuad vtable reset at 0x194, stringx destruction at 0x170, and deleting-mode continuation; it matched byte-exactly.

## Outcome

Matched generated PanelQuad4 destructor
