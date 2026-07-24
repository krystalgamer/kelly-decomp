# _$_15script_callback

- Address: `0x0034BD90`
- Size: `0x74` (116 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.4545 | 63.6364 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released script-callback layout, vtable resets, dangling-reference cleanup, parameter array deletion, and optional object deletion. Preventing the final delete tail call matched on attempt 2.

## Outcome

Matched script callback destructor
