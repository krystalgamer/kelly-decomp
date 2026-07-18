# get_signal_name__C9signallerUs

- Address: `0x0035FD08`
- Size: `0xC` (12 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signals.h`
- Reference source: `KS/SRC/signals.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the target returns a resolved signaller name through a local absolute equate.

## Outcome

The target `signaller::get_signal_name` constant pointer matched exactly on the first attempt.
