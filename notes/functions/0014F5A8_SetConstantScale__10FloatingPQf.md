# SetConstantScale__10FloatingPQf

- Address: `0x0014F5A8`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.1176 | 88.2353 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released body, but the abbreviated PanelQuad virtual declaration selected the first vtable slot rather than the released SetScale slot.

### Attempt 2 notes

Restored the released PanelQuad virtual-method position; the body matched exactly.

## Outcome

The exact released scale updates and SetScale virtual dispatch match with the released vtable position.
