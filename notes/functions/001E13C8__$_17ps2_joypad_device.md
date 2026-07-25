# _$_17ps2_joypad_device

- Address: `0x001E13C8`
- Size: `0xA0` (160 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.5745 | 11.6279 | `candidate.cpp` |
| 2 | different | 33.3333 | 11.3636 | `candidate.cpp` |
| 3 | different | 33.3333 | 11.3636 | `candidate.cpp` |
| 4 | different | 30.8511 | 9.0909 | `candidate.cpp` |
| 5 | different | 30.0 | 10.2564 | `candidate.cpp` |

## Outcome

Five released-source and exact-layout variants reproduced the operation, but generated temporary/destructor scheduling did not match.
