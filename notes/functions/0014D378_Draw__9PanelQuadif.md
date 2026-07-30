# Draw__9PanelQuadif

- Address: `0x0014D378`
- Size: `0x430` (1072 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.9888 | 6.7164 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 170 lane B1 — 0x0014D378

- Result: **different**
- Attempts before: **0**
- Attempt tested: **1 only**
- Byte score: **20.9888%** (225/1072)
- Instruction score: **6.7164%** (18/268)
- Candidate/target size: **928/1072 bytes**
- Candidate SHA-1: `59818c94b58fc71a04f4ac62dcb516ada7b50b55`

The candidate uses the exact released `PanelQuad::Draw(int current_layer, float alpha)` body at `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:1625-1695`, with the released `PanelQuad` layout/signature from `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:427-521` and source-faithful supporting declarations already established by the shared PanelQuad prior-art candidate at `tmp/functions/0014ED68_Draw__10PanelQuad4if/attempt-1/candidate.cpp`.

No alternate source or candidate was attempted. No retries, diff chasing, source-absent rewrite, independent class/vtable recreation, compiler/tool/build changes, finalization, build, commit, push, queue edit, or tracked-tree edit was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.cpp:1625-1695` — exact released function body; no alternate implementation was used.
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:427-521` — authentic released `PanelQuad` declaration/layout and method signature.
- `tmp/functions/0014ED68_Draw__10PanelQuad4if/attempt-1/candidate.cpp` — existing shared source-faithful PanelQuad prior art.
- `tmp/functions/0014D378_Draw__9PanelQuadif/attempt-1/result.json` — sole isolated test result.

## Outcome

The exact released PanelQuad::Draw body compiled but differed at 20.9888% bytes and 6.7164% instructions; no alternate source was attempted.
