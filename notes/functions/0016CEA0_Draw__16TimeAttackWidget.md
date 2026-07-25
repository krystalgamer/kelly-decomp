# Draw__16TimeAttackWidget

- Address: `0x0016CEA0`
- Size: `0x98` (152 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_timeattack.cpp`
- Reference source: `KS/SRC/ks/igo_widget_timeattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.1053 | 68.4211 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact base/widget visibility and four draw dispatches. Binding text draw targets to the released vtable/function registers matched on attempt 2.

### Attempt 3 notes

Read the exact base/widget visibility and four draw dispatches. Reusing the shared TimeAttackWidget header with a layout view and binding text draw targets matched exactly.

## Outcome

Matched time attack widget draw
