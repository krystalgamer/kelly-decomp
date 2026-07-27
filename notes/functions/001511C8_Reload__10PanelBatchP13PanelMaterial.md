# Reload__10PanelBatchP13PanelMaterial

- Address: `0x001511C8`
- Size: `0x100` (256 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 65.1515 | 60.6061 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue row was `pending` with zero attempts; no address scratch existed, and the tracked tree was clean.
- Used the released `PanelBatch::Reload` body verbatim from `FEPanel.cpp:2694-2719` with the authentic `PanelMaterial`, `PanelQuad` inline helpers, and `PanelBatch` declarations from `FEPanel.h:410-485,626-674`; reused `stringx` and checked FEPanel shared prior art at `src/KS/SRC/ks/FEPanel_shared.h:210-242,300-324`.
- Result: **different** — byte score 65.1515%, instruction score 60.6061%; candidate size 264 vs target 256. Exactly one candidate was tested; no attempt 2 or diff chasing was performed.

## Outcome

Exact released PanelBatch Reload source differed from the target; preserved attempt 1 for the later Sol pass.
