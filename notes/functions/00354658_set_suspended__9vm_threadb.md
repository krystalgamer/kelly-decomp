# set_suspended__9vm_threadb

- Address: `0x00354658`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released suspension guard and inline flag update matched exactly with `flags` at offset 0x8 and the original SUSPENDED/SUSPENDABLE masks.

## Outcome

The released VM-thread suspension setter matched exactly on the first attempt.
