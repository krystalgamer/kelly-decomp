# DeleteCamButton__26DeleteCamMenuEntryFunctioni

- Address: `0x002EDDD8`
- Size: `0x68` (104 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.cpp`
- Reference source: `KS/SRC/ks/camera_tool.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.2692 | 73.0769 | `candidate.cpp` |
| 2 | different | 86.5385 | 84.6154 | `candidate.cpp` |
| 3 | different | 94.2308 | 92.3077 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact cross-button case, parent deletion flag, global menu system, and two CloseMenu dispatches. Fixed page and parent load dependencies matched on attempt 4.

## Outcome

Matched camera deletion button
