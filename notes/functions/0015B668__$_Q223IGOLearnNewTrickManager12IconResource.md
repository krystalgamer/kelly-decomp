# _$_Q223IGOLearnNewTrickManager12IconResource

- Address: `0x0015B668`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Reference source: `KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 0.0 | `size36-icon-destructors-1.cpp` |
| 2 | different | 19.4444 | 0.0 | `size36-icon-destructors-2.cpp` |
| 3 | different | 19.4444 | 0.0 | `size36-icon-destructors-3.cpp` |

## Outcome

All three ordinary compiler-generated destructor bodies emit a 28-byte
null-guarded tail call to `__builtin_delete`. The target retains a 36-byte
call frame, so the manual destructor wrapper was removed.
