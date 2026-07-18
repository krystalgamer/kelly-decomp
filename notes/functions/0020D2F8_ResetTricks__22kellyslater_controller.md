# ResetTricks__22kellyslater_controller

- Address: `0x0020D2F8`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets `completedTrick` at `0x18F8` and `currentTrick` at `0x18F4` to `-1`.

## Outcome

The released `kellyslater_controller::ResetTricks` assignments matched exactly on the first attempt.
