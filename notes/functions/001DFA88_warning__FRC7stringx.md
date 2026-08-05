# warning__FRC7stringx

- Address: `0x001DFA88`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_errmsg.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_errmsg.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.7778 | 0.0 | `size36-errmsg-1.cpp` |
| 2 | different | 2.7778 | 0.0 | `size36-errmsg-2.cpp` |
| 3 | different | 2.7778 | 0.0 | `size36-errmsg-3.cpp` |

### Attempt 1 notes

The exact released `nglPrintf` expression compiles as a 16-byte sibling call instead of the target retained frame.

### Attempt 2 notes

Loading the string data through a local emits the same sibling call.

### Attempt 3 notes

Loading the shared format through a local also emits the same sibling call.

## Outcome

The barrier-dependent wrapper was removed and the original target function was deferred.
