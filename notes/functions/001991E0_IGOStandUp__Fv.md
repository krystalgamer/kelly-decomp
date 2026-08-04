# IGOStandUp__Fv

- Address: `0x001991E0`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.2222 | 22.2222 | `size36-igo-standup-1.cpp` |
| 2 | different | 22.2222 | 22.2222 | `size36-igo-standup-2.cpp` |
| 3 | different | 22.2222 | 22.2222 | `size36-igo-standup-3.cpp` |

### Attempt 1 notes

The direct released expression compiles as a 12-byte sibling call instead of the target 36-byte retained call frame.

### Attempt 2 notes

Copying the canonical IGO pointer to a local still compiles as the same 12-byte sibling call.

### Attempt 3 notes

Forwarding through a local reference also compiles as the same 12-byte sibling call.

## Outcome

The barrier-dependent wrapper was removed and the original target function was deferred.
