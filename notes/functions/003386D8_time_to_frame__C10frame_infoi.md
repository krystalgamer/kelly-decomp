# time_to_frame__C10frame_infoi

- Address: `0x003386D8`
- Size: `0x4C` (76 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/frame_info.cpp`
- Reference source: `KS/SRC/frame_info.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the immutable `frame_info.cpp:65-78` body and reconstructed the shared
class declaration from `frame_info.h`.

## Outcome

The released period handling and frame-index calculation matched
byte-for-byte on the first attempt.
