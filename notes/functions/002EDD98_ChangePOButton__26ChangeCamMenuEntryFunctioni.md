# ChangePOButton__26ChangeCamMenuEntryFunctioni

- Address: `0x002EDD98`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.cpp`
- Reference source: `KS/SRC/ks/camera_tool.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The initial ABI layout candidate failed because the isolated vtable field was declared private.

### Attempt 2 notes

The shared camera-tool callback and menu-system hierarchy reproduce the
cross-button virtual `CloseMenu` dispatch.

## Outcome

The manual menu-system vtable layout was removed.
