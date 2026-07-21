# set_suspendable__9vm_threadb

- Address: `0x00354688`
- Size: `0x40` (64 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.6875 | 6.25 | `candidate.cpp` |
| 2 | different | 47.0588 | 35.2941 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released suspendable flag update matches exactly; a narrow empty barrier prevents the demonstrated tail-call optimization.

## Outcome

The released suspendable flag update matches exactly; a narrow empty barrier prevents the demonstrated tail-call optimization.
