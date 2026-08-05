# _$_14TimeAttackMode

- Address: `0x00286050`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 0.0 | `size36-empty-destructors.cpp` |
| 2 | different | 19.4444 | 0.0 | `size36-empty-destructors-2.cpp` |
| 3 | different | 19.4444 | 0.0 | `size36-empty-destructors-3.cpp` |

## Outcome

All three ordinary empty destructor definitions emit a 28-byte null-guarded
tail call to `__builtin_delete`. The target retains a 36-byte deleting-flag
call frame, so the hand-written destructor thunk was removed.
