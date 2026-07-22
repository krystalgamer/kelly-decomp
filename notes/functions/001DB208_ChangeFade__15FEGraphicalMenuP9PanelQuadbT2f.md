# ChangeFade__15FEGraphicalMenuP9PanelQuadbT2f

- Address: `0x001DB208`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 19.7368 | 15.7895 | `candidate.cpp` |
| 3 | different | 70.0 | 60.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The released parent delegation was preserved with the shared shipped-vtable
context.  EE GCC did not inline the released `FrontEnd::ChangeFade` helper in
this isolated translation unit, so its equivalent null-guarded `PanelQuad`
call is expressed directly.  The old-GCC compressed symbol spellings are
retained on the shared declarations.  `KELLY_DECOMP_COMPILER_BARRIER()` emits
no instruction and prevents a demonstrated sibling tail jump.

## Outcome

Matched FEGraphicalMenu panel fading with the shared front-end and PanelQuad contexts.
