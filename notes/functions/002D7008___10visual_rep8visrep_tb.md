# __10visual_rep8visrep_tb

- Address: `0x002D7008`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/visrep.cpp`
- Reference source: `KS/SRC/visrep.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.9231 | 7.6923 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled all members through a C++ initializer list. With an explicit trailing vtable field, EE GCC scheduled the float constants first and stored the vtable in the return delay slot, unlike the target's implicit-virtual initialization order.

### Attempt 2 notes

The released constructor matched exactly when the explicit isolated vtable model is assigned before the source members, reproducing the implicit virtual-class initialization order. Fields occupy offsets 0-0x10.

## Outcome

The released visual-representation constructor matched exactly.
