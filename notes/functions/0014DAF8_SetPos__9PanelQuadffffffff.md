# SetPos__9PanelQuadffffffff

- Address: `0x0014DAF8`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-frontend-core.cpp` |

### Attempt 1 notes

The shared panel declaration preserves the released overload's ignored
second/fourth pairs and virtual forwarding of `(xa, ya, xc, yc)`.

## Outcome

The manual vtable layout was removed.
