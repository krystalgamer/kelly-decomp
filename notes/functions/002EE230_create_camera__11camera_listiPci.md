# create_camera__11camera_listiPci

- Address: `0x002EE230`
- Size: `0x88` (136 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.cpp`
- Reference source: `KS/SRC/ks/camera_tool.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 53.5714 | 31.4286 | `candidate.cpp` |
| 3 | different | 52.1429 | 25.7143 | `candidate.cpp` |
| 4 | different | 83.8235 | 79.4118 | `candidate.cpp` |
| 5 | different | 39.4737 | 26.3158 | `candidate.cpp` |

## Outcome

Deferred the released camera-list creation helper after five source-level attempts; bounds checking, debug allocation, entity-id creation, camera construction, and slot assignment were reconstructed, but allocation/index scheduling remained different.
