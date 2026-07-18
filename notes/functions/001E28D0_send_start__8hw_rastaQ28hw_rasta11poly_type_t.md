# send_start__8hw_rastaQ28hw_rasta11poly_type_t

- Address: `0x001E28D0`
- Size: `0x8` (8 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method assigns `send_type = type`; singleton base state places the field at offset `0x8`.

## Outcome

The released `hw_rasta::send_start` state assignment matched exactly on the first attempt.
