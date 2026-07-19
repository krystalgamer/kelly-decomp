# ClearTricks__22kellyslater_controller

- Address: `0x0020D308`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.2857 | 57.1429 | `candidate.cpp` |
| 2 | different | 37.5 | 37.5 | `clear_tricks_2.cpp` |
| 3 | matched | 100.0 | 100.0 | `clear_tricks_3.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The direct reset produced an equivalent rotation of the three `-1` stores. Register and memory constraints preserve the target's materialization and store schedule.

## Outcome

`kellyslater_controller::ClearTricks` matched exactly after constraining the released reset store order.
