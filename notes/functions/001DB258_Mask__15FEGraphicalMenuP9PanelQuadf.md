# Mask__15FEGraphicalMenuP9PanelQuadf

- Address: `0x001DB258`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The released inline parent delegation matched immediately.  It reuses the
shared shipped-version FEMenu vtable tail and the source-faithful `PanelQuad`
prefix, where `mask` and `maskType` retain their original offsets.

## Outcome

Matched FEGraphicalMenu panel masking with the established shared front-end and PanelQuad contexts.
