# ClearTricks__22kellyslater_controller

- Address: `0x0020D308`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.2857 | 57.1429 | `native_clear_tricks_probe_1.cpp` |
| 2 | different | 89.2857 | 57.1429 | `native_clear_tricks_probe_2.cpp` |
| 3 | different | 78.5714 | 71.4286 | `native_clear_tricks_probe_3.cpp` |

## Outcome

Three ordinary field-order variants remain instruction-equivalent but do not
reproduce the target store schedule. The former constrained/barrier-dependent
match was removed and the function was deferred.
