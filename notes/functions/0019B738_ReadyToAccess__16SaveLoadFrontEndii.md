# ReadyToAccess__16SaveLoadFrontEndii

- Address: `0x0019B738`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.6667 | 11.1111 | `size36-ready-access-1.cpp` |
| 2 | different | 16.6667 | 11.1111 | `size36-ready-access-2.cpp` |
| 3 | different | 16.6667 | 11.1111 | `size36-ready-access-3.cpp` |

### Attempt 1 notes

The direct recovered call compiles as a 16-byte sibling call instead of the target 36-byte retained call frame.

### Attempt 2 notes

An explicitly qualified member call emits the same 16-byte sibling call.

### Attempt 3 notes

Forwarding through a local state value and explicit bool constructions also emits the same 16-byte sibling call.

## Outcome

The barrier-dependent wrapper was removed and the original target function was deferred.
