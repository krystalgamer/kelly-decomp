# pop_num__8vm_stack

- Address: `0x00354140`
- Size: `0x14` (20 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_stack.cpp`
- Reference source: `KS/SRC/vm_stack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method decrements the stack pointer at `0x8` by four and loads the popped float.

## Outcome

The released `vm_stack::pop_num` pointer update and load matched exactly on the first attempt.
