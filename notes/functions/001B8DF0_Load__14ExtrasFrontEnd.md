# Load__14ExtrasFrontEnd

- Address: `0x001B8DF0`
- Size: `0x1C0` (448 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.cpp`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.2589 | 3.5714 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 notes

- Exact released body copied unchanged from `kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.cpp:160-182`.
- Minimal standalone declarations model only `stringx`, `FEMultiMenu`, `BoxText`, `PanelQuad`, `CheatFrontEnd`, and the referenced `ExtrasFrontEnd` fields; no project or STL headers.
- Declaration/layout sources: `kelly-slaters-pro-surfer/KS/SRC/ks/ExtrasFrontEnd.h:11-55`, `kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.h:404-431`, `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:193-216`, and `kelly-slaters-pro-surfer/KS/SRC/ks/CheatFrontEnd.h:45-86`.
- Target metadata and assembly inspected before testing: `tmp/functions/001B8DF0_Load__14ExtrasFrontEnd/metadata.json`, `tmp/functions/001B8DF0_Load__14ExtrasFrontEnd/target.s`.
- Sole candidate test returned `different`: 8.2589% bytes (37/448), 3.5714% instructions (4/112), candidate size 304, target size 448, SHA-1 `ef664cd7fceaf21f19d46257d4d44520c5f4b24c`.
- Exactly one test invocation; no retry, alternate body, post-test diff chase, build, finalize, integration, tracked edit, or git mutation.

## Outcome

The exact released extras-frontend load body differed at 8.2589% byte score; no source variant was attempted.
