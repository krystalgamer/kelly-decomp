# _$_12EventManager

- Address: `0x003499A0`
- Size: `0x24` (36 bytes)
- Object: `game/files_vsim`
- Debug source: `ks/eventmanager.cpp`
- Reference source: `KS/SRC/ks/eventmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 0.0 | `size36-event-dtor-1.cpp` |
| 2 | different | 19.4444 | 0.0 | `size36-event-dtor-2.cpp` |
| 3 | different | 19.4444 | 0.0 | `size36-event-dtor-3.cpp` |

## Outcome

Three ordinary native definitions failed to reproduce the target 36-byte call
frame; the closest form emits 28 bytes. The matching-only body was removed
and the original target function was deferred.
