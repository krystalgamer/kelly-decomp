# get_ifl_frame_locked__C10frame_info

- Address: `0x00338650`
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

The released accessor returns `ifl_frame_locked` from offset `0x8`.

## Outcome

The released `frame_info::get_ifl_frame_locked` accessor matched exactly on the first attempt.
