# ignore_parent__6widget

- Address: `0x00360300`
- Size: `0x10` (16 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper sets `WFLAG_Ignore_Parent` (`4`) in flags at offset `0x14`.

## Outcome

The released `widget::ignore_parent` flag update matched exactly on the first attempt.
