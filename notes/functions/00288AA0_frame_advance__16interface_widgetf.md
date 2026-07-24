# frame_advance__16interface_widgetf

- Address: `0x00288AA0`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/interface.cpp`
- Reference source: `KS/SRC/interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 43.3333 | 36.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the shown flag, current reticle/vtable layouts, and base widget frame advance. Direct bit testing and preventing the base tail call matched on attempt 2.

## Outcome

Matched interface widget frame advance
