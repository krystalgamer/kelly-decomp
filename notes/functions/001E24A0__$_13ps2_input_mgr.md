# _$_13ps2_input_mgr

- Address: `0x001E24A0`
- Size: `0xA4` (164 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_input.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_input.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.6739 | 52.1739 | `candidate.cpp` |
| 2 | different | 56.7073 | 39.0244 | `candidate.cpp` |
| 3 | different | 28.4884 | 9.3023 | `candidate.cpp` |
| 4 | different | 59.5238 | 33.3333 | `candidate.cpp` |
| 5 | different | 76.7857 | 69.0476 | `candidate.cpp` |

## Outcome

Five released PS2 input-manager destructor variants reproduced cleanup but not deleting-flag and epilogue scheduling.
