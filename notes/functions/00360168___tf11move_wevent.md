# __tf11move_wevent

- Address: `0x00360168`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released class declaration/inheritance and body from the released reference tree. Reused the shared single-inheritance RTTI pattern with exact target typeinfo and name pointers.

## Outcome

Matched released RTTI body for move_wevent
