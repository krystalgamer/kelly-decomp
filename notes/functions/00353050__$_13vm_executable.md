# _$_13vm_executable

- Address: `0x00353050`
- Size: `0x10C` (268 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_executable.cpp`
- Reference source: `KS/SRC/vm_executable.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.1791 | 4.4776 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/vm_executable.cpp:50-53; kelly-slaters-pro-surfer/KS/SRC/vm_executable.h:20-60; kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-287; kelly-slaters-pro-surfer/KS/SRC/custom_stl.h:230-249,422-462. Result `different`, score 14.1791; no later attempt.

## Outcome

The exact released VM-executable destructor differed from the target; the sole attempt scored 14.1791%.
