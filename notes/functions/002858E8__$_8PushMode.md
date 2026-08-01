# _$_8PushMode

- Address: `0x002858E8`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_push.cpp`
- Reference source: `KS/SRC/ks/mode_push.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 0.0 | `push-1.cpp` |
| 2 | different | 19.4444 | 0.0 | `push-2.cpp` |
| 3 | different | 19.4444 | 0.0 | `push-3.cpp` |

## Outcome

Three native PushMode destructor forms generated the shorter deleting-destructor sequence; the manual extern-C wrapper was removed.
