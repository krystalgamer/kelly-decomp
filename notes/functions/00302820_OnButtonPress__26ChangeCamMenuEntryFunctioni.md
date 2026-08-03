# OnButtonPress__26ChangeCamMenuEntryFunctioni

- Address: `0x00302820`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.h`
- Reference source: `KS/SRC/ks/camera_tool.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-block2-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-block2-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-block2-probes-3.cpp` |

## Outcome

Three direct-call forms all discard the boolean result through an eight-byte
sibling call. The target retains a 28-byte frame, so the barrier-dependent
inline wrapper was removed.
