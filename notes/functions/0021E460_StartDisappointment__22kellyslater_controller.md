# StartDisappointment__22kellyslater_controller

- Address: `0x0021E460`
- Size: `0x14` (20 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets `super_state` at `0x38` to `8` and `state` at `0x30` to disappointed state `91`.

## Outcome

The released `kellyslater_controller::StartDisappointment` state changes matched exactly on the first attempt.
