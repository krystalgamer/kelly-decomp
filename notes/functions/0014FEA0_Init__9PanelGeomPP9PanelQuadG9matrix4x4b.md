# Init__9PanelGeomPP9PanelQuadG9matrix4x4b

- Address: `0x0014FEA0`
- Size: `0x18C` (396 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.6162 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Exact released `PanelGeom::Init` body with minimal faithful `matrix4x4`,
`PanelGeom`, child-vtable, and PS2 inline matrix-multiply declarations.

Outcome: **different**, 46/396 bytes (11.6162%), 0/99 instructions (0.0%);
candidate size 300 bytes versus target size 396 bytes.

## Outcome

The exact released panel-geometry initialization differed at 11.6162% byte score; no source variant was attempted.
