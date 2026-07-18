# get_signal_name__C3appUi

- Address: `0x0030BC50`
- Size: `0xC` (12 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/app.cpp`
- Reference source: `KS/SRC/app.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the target returns a resolved application signal-name literal through a local absolute equate.

## Outcome

The target `app::get_signal_name` constant pointer matched exactly on the first attempt.
