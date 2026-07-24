# OnButtonPress__7Submenui

- Address: `0x0023F1F8`
- Size: `0x6C` (108 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.5758 | 51.5152 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the cross-button, parent/menu/system fields, and Close/Open sequence. Preventing the Open tail call matched on attempt 2.

## Outcome

Matched submenu button press
