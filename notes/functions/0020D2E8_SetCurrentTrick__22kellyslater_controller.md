# SetCurrentTrick__22kellyslater_controller

- Address: `0x0020D2E8`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method copies `newTrick` from offset `0x18FC` into `currentTrick` at `0x18F4`.

## Outcome

The released `kellyslater_controller::SetCurrentTrick` copy matched exactly on the first attempt.
