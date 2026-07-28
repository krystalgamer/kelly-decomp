# OnDown__11OptionsMenui

- Address: `0x00182968`
- Size: `0x150` (336 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **compile_failed**
- Score: **0.0%**
- Used the exact released `OptionsMenu::OnDown(int)` body with minimal declarations for the touched menu entry, panel quad virtual interface, graphical-menu base call, and sound singleton.
- The compiler rejected the minimal `PanelQuad::SetClip` declaration because `const void&` is invalid.
- Exactly one non-placeholder candidate was tested; no retry, variant, disassembly/diff chasing, build, finalization, integration, tracked-file edit, tool edit, commit, or push was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/MainFrontEnd.cpp:833-843` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/ks/MainFrontEnd.h:120-174` — released `OptionsMenu` declaration and member order.
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.h:20-130,250-350` — released menu entry and graphical-menu declarations.
- `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:427-517` — released `PanelQuad` virtual interface.
- `kelly-slaters-pro-surfer/KS/SRC/ks/SoundScript.h:39-67` and `KS/SRC/singleton.h:9-58` — sound manager singleton and `playEvent` declarations.
- `tmp/functions/00182968_OnDown__11OptionsMenui/attempt-1/compiler.stderr:1` — compile failure.
- `tmp/functions/00182968_OnDown__11OptionsMenui/attempt-1/result.json` — isolated test result.

## Outcome

The exact released OptionsMenu Down handler failed the isolated compile in its declaration context; the sole attempt scored 0%.
