# disgorge_items__6entityP6entity

- Address: `0x00137C78`
- Size: `0x20` (32 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-first-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-first-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-first-probes-3.cpp` |

## Outcome

All three ordinary diagnostic-call forms tail-call `error` in 12 bytes after loading the released string address. The target retains a 32-byte frame, so the barrier-dependent stub was deferred.
