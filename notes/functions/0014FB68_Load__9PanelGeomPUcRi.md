# Load__9PanelGeomPUcRi

- Address: `0x0014FB68`
- Size: `0x10C` (268 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.4478 | 97.0149 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Copied the released `PanelGeom::Load` body exactly from `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:2339-2357`.
- Added only self-contained declarations needed by that body: the released `PanelGeom` data-member order, two-pointer `stringx`, aligned 4x4 matrix storage, three-float `vector3d`, and the called read/load declarations.
- Ran `function_test` exactly once. Result: `different`, byte score 85.4478% (229/268), instruction score 97.0149% (65/67), candidate and target size 268 bytes.
- No variants, disassembly comparison, or diff chasing were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:2339-2357` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:605-632` — `PanelGeom` declaration and member order.
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:788-795` — exact read helper declarations.
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-287` — `stringx` representation and special members.

## Outcome

The exact released panel-geometry loader differed from the target; the sole attempt scored 85.4478%.
