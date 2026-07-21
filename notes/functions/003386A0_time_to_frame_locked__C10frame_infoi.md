# time_to_frame_locked__C10frame_infoi

- Address: `0x003386A0`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/frame_info.cpp`
- Reference source: `KS/SRC/frame_info.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released function returns frame zero for a single-frame period, otherwise uses a nonnegative locked frame or delegates to time_to_frame. The original branch structure and recovered member offset match exactly.

## Outcome

The original locked-frame selection logic matches exactly, including its single-frame fast path and delegated fallback.
