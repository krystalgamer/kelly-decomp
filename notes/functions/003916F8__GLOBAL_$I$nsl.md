# _GLOBAL_$I$nsl

- Address: `0x003916F8`
- Size: `0x20` (32 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-last-thunks-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-last-thunks-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-last-thunks-3.cpp` |

## Outcome

Three direct forms collapse the generated initialization thunk to a 12-byte sibling
call. The manual generated-symbol wrapper was removed and the target returned
to raw text.
