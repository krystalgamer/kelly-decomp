# set_ifl_frame_locked__10frame_infoi

- Address: `0x00338658`
- Size: `0x8` (8 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/frame_info.cpp`
- Reference source: `KS/SRC/frame_info.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes `ifl_frame_locked` at offset `0x8`.

## Outcome

The released `frame_info::set_ifl_frame_locked` setter matched exactly on the first attempt.
