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

Exposing the recovered MenuSystem layout for the virtual CloseMenu dispatch reproduces the released cross-button callback exactly.

## Outcome

The released cross-button guard and virtual MenuSystem close dispatch match exactly.
