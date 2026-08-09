# show__12timer_widget

- Address: `0x002BBA38`
- Size: `0x38` (56 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_script.cpp`
- Reference source: `KS/SRC/widget_script.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override uses the shared timer/widget state, starts and marks the
timer stale, then calls the base show through a local function pointer.

## Outcome

The local timer layout and compiler barrier were removed.
