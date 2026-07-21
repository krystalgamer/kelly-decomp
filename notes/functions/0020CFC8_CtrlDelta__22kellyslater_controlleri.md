# CtrlDelta__22kellyslater_controlleri

- Address: `0x0020CFC8`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 20.5882 | 5.8824 | `candidate.cpp` |

### Attempt 5 notes

The released function is a thin wrapper around `input_mgr::get_control_delta(joystick_num, control)`, but the direct candidate still diverged after the first full compileable form. The remaining mismatch appears to be caused by compiler-emission differences in the call sequence and/or implicit context setup rather than control flow.

## Outcome

The released CtrlDelta wrapper was reconstructed from source, but the last compileable candidate still diverged from the target bytes after five attempts. The function is deferred for deeper escalation because the remaining mismatch is in emitted code shape, not in the high-level source logic.
