# Draw__9PanelFilei

- Address: `0x001530B8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released PanelFile/PanelQuad declarations, pquads/next/vtable offsets, Draw slot, default alpha, and loop body. It matched byte-exactly on attempt 1.

## Outcome

Matched panel file quad drawing loop
