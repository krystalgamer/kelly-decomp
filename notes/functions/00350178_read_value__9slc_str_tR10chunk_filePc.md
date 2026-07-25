# read_value__9slc_str_tR10chunk_filePc

- Address: `0x00350178`
- Size: `0xA8` (168 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.619 | 61.9048 | `candidate.cpp` |
| 2 | different | 42.8571 | 35.7143 | `candidate.cpp` |
| 3 | different | 88.0952 | 80.9524 | `candidate.cpp` |
| 4 | different | 91.6667 | 90.4762 | `candidate.cpp` |
| 5 | different | 73.2143 | 71.4286 | `candidate.cpp` |

## Outcome

Five released string-read variants reproduced allocation, serialization, and vector insertion but not call argument scheduling.
