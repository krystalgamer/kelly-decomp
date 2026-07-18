# init_fast_acos_table__Fv

- Address: `0x001E30B0`
- Size: `0x8` (8 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_math.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_math.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target and released configuration reduce this front-end hook to an empty method. The guarded candidate matched on the first attempt.

## Outcome

The target and released configuration reduce init_fast_acos_table() to an empty hook. The first candidate matched exactly and preserved the byte-identical integrated ROM.
