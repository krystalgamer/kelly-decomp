# construct_script_controllers__Fv

- Address: `0x00317FA8`
- Size: `0x98` (152 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_controller.cpp`
- Reference source: `KS/SRC/script_lib_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.7895 | 0.0 | `candidate.cpp` |
| 2 | different | 63.8158 | 83.3333 | `candidate.cpp` |
| 3 | different | 58.5526 | 77.7778 | `candidate.cpp` |
| 4 | different | 63.8158 | 83.3333 | `candidate.cpp` |
| 5 | different | 63.8158 | 83.3333 | `candidate.cpp` |

## Outcome

Five released-source controller array construction variants reproduced allocation, cookie, constructors, and global store, but target loop nops/prologue scheduling did not match.
