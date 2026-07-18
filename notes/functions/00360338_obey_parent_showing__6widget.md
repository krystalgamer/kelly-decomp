# obey_parent_showing__6widget

- Address: `0x00360338`
- Size: `0x14` (20 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper clears `WFLAG_Ignore_Parent_Showing` (`8`) in the signed flags word at `0x14`.

## Outcome

The released `widget::obey_parent_showing` flag clear matched exactly on the first attempt.
