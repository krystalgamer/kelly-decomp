# ToggleOn__15FEGraphicalMenuP9PanelQuad

- Address: `0x001DB1B8`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.3684 | 89.4737 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The released inline body was retained.  The existing shared `PanelQuad` was
expanded with its original leading fields, including `drawOn` at offset
`0x80`, and the established front-end hierarchy gained its released panel
helpers.  The first source-faithful hierarchy exposed the already observed
single shipped-version tail slot missing from the released FEMenu header; the
conditional shared tail entry restores that reviewed vtable context.

## Outcome

Matched the released FEGraphicalMenu panel toggle using the shared front-end and PanelQuad layouts.
