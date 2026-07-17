# get_axis_id__C18AISurferControlleri

- Address: `0x00100330`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.cpp`
- Reference source: `KS/SRC/AIController.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method directly returns its `axis` argument. The first C++
candidate produced the target `daddu` in the return delay slot.

## Outcome

The released AISurferController::get_axis_id(int) method returns its argument unchanged. The first candidate matched both target instructions, and the integrated full ROM retained the exact checksum.
