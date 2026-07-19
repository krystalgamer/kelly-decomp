# OnButtonPress__26DeleteCamMenuEntryFunctioni

- Address: `0x003028C0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.h`
- Reference source: `KS/SRC/ks/camera_tool.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The inline handler invokes `DeleteCamButton` and discards its boolean result; a barrier preserves the wrapper.

## Outcome

The inline `DeleteCamMenuEntryFunction::OnButtonPress` wrapper matched exactly on the first attempt.
