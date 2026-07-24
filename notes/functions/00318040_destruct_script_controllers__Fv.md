# destruct_script_controllers__Fv

- Address: `0x00318040`
- Size: `0x88` (136 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_controller.cpp`
- Reference source: `KS/SRC/script_lib_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 11.0294 | 2.9412 | `candidate.cpp` |
| 2 | different | 44.8529 | 32.3529 | `candidate.cpp` |
| 3 | different | 11.0294 | 2.9412 | `candidate.cpp` |
| 4 | different | 44.8529 | 32.3529 | `candidate.cpp` |
| 5 | different | 15.4412 | 5.8824 | `candidate.cpp` |

## Outcome

Deferred the released script-controller array teardown after five source-level attempts; reverse virtual destruction, vector delete, and global nulling were reconstructed, but high-base and loop-nop scheduling remained different.
