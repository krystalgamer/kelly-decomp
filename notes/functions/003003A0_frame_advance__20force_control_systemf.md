# frame_advance__20force_control_systemf

- Address: `0x003003A0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/fcs.h`
- Reference source: `KS/SRC/fcs.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released frame hook clears the word-sized `locked` flag at offset `0xC`.

## Outcome

The released `force_control_system::frame_advance` flag clear matched exactly on the first attempt.
