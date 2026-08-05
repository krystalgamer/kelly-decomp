# SetZ__9PanelQuadf

- Address: `0x001D9B28`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.5 | 0.0 | `size40-menu-virtuals.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-panel-set-z.cpp` |

## Outcome

The shared `PanelQuad` layout stores Z and uses an ordinary local NGL function pointer to retain the released call frame.
