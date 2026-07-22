# end_secondary_cam__22kellyslater_controller

- Address: `0x0021F6E0`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 1.3889 | 0.0 | `candidate.cpp` |
| 2 | different | 62.5 | 55.5556 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released body after extending the shared controller/game declarations; GCC tail-called SetPlayerCamera.

### Attempt 2 notes

Attempt 2 added the normalized barrier after the conditional, preventing the tail call but changing branch-delay restore scheduling.

### Attempt 3 notes

Attempt 3 narrowed the barrier to the call branch, reproducing the target control flow exactly. The barrier is retained only for the demonstrated sibling-call optimization.

## Outcome

The secondary-camera teardown matches released behavior with one documented optimizer barrier.
