# _GLOBAL_$D$_7pstring$output_index

- Address: `0x00361828`
- Size: `0x20` (32 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.h`
- Reference source: `KS/SRC/vm_thread.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-final-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-final-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-final-probes-3.cpp` |

## Outcome

Three direct forms collapse the generated destruction thunk to a 12-byte sibling call. The manual generated-symbol wrapper was removed.
