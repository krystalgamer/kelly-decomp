# _$_12KeyboardMenu

- Address: `0x001A1358`
- Size: `0x110` (272 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/ks/SaveLoadFrontEnd.cpp:2283-2288; kelly-slaters-pro-surfer/KS/SRC/ks/SaveLoadFrontEnd.h:315-336; kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.h:405-432; kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:48-78; tmp/functions/001A1358__$_12KeyboardMenu/attempt-1/compiler.stderr:1-2; tmp/functions/001A1358__$_12KeyboardMenu/attempt-1/result.json. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released KeyboardMenu destructor failed the isolated compile because its vtable alias collided; the sole attempt scored 0%.
