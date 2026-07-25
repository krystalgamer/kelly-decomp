# Draw__10GridWidget

- Address: `0x0016EA50`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_grid.cpp`
- Reference source: `KS/SRC/ks/igo_widget_grid.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released draw body matched on the first attempt using the existing shared IGOWidget and PanelQuad declarations plus one reusable source-faithful GridWidget declaration.

## Outcome

Matched the released grid-widget draw loops with shared widget declarations.
