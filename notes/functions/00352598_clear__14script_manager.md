# clear__14script_manager

- Address: `0x00352598`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-final1-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-final1-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-final1-probes-3.cpp` |

## Outcome

All three ordinary forms tail-call `_destroy` in eight bytes. The target
retains a 28-byte frame, so the former barrier-dependent match was removed.
