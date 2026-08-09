# WaitForStashLoad__5stash

- Address: `0x00345BC0`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.25 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released semaphore wait followed by semaphore release. The compiler converted the final `SignalSema` call into a sibling tail call, producing 44 bytes instead of the target's framed call and return.

### Attempt 2 notes

The released PS2 semaphore wait/release sequence uses the recovered semaphore
alias and a local release-function pointer.

## Outcome

The compiler barrier was removed while preserving the normal `SignalSema`
call.
