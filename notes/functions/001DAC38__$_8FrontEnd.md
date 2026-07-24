# _$_8FrontEnd

- Address: `0x001DAC38`
- Size: `0x70` (112 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released inline FrontEnd destructor and exact PanelAnimManager, PanelFile, and stringx member layout. The source-faithful generated destructor matched on attempt 1.

## Outcome

Matched frontend destructor
