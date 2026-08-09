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

The shared virtual class declaration naturally emits the vtable initialization
before the released member initializers.

## Outcome

The explicit vtable field and manual assignment were removed; the released
constructor remains exact.
