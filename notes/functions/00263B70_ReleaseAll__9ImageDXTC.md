# ReleaseAll__9ImageDXTC

- Address: `0x00263B70`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_imagedxt1.cpp`
- Reference source: `KS/SRC/ks/dxt1_imagedxt1.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released chained assignment clears `YSize` then `XSize`; EE GCC schedules the `YSize` store into the delay slot.

## Outcome

The released `ImageDXTC::ReleaseAll` size clears matched exactly on the first attempt.
