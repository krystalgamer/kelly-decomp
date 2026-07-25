# find_instance__C13script_objectRC7stringx

- Address: `0x003511B8`
- Size: `0x94` (148 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.3784 | 0.0 | `candidate.cpp` |
| 2 | different | 28.3784 | 0.0 | `candidate.cpp` |
| 3 | different | 29.7297 | 5.4054 | `candidate.cpp` |
| 4 | different | 31.0811 | 5.4054 | `candidate.cpp` |
| 5 | different | 28.3784 | 0.0 | `candidate.cpp` |

## Outcome

Five released-source instance-list and string equality variants reproduced lookup semantics, but target-specific whole-function register allocation and block comparison scheduling did not match.
