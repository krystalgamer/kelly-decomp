# Update__12MainFrontEndf

- Address: `0x0017F6D0`
- Size: `0xD8` (216 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 29.6296 | 20.3704 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Exact released `MainFrontEnd::Update` body. Context uses the existing `MainFrontEnd_shared.h` hierarchy and supplies the previously visible unity-build `FEGraphicalMenu::Update` definition so `FEMultiMenu::Update` can inline source-faithfully into `FrontEnd::Update` plus `FEMenu::Update`. External update addresses are the released symbols.

### Attempt 2 notes

# Attempt 2

Attempt 1 failed because `MainFrontEnd_shared.h` only forward-declared `FreesurfMenu` and `MultiplayerMenu`. Added source-faithful narrow derived declarations exposing their virtual `Update(float)` methods; retained the exact released body and inline unity-build `FEGraphicalMenu::Update` context.

### Attempt 3 notes

# Attempt 3

Expanded the single released `FEMultiMenu::Update(time_inc)` statement to the exact two calls in its unity-visible inherited implementation: `FrontEnd::Update(time_inc)` then `FEMenu::Update(time_inc)`. This preserves behavior and the released source call chain while avoiding GCC 2.95's refusal to inline an out-of-class inline definition supplied after the hierarchy declaration.

### Attempt 4 notes

Re-tested the exact released body against the consolidated source-faithful `MultiplayerMenu` and `FreesurfMenu` declarations in `MainFrontEnd_shared.h`. The isolated function remained byte-exact.

## Outcome

Matched the exact released main-menu update after expanding the released inline base update and consolidating source-faithful submenu declarations.
