# file_exists__5stashPCc

- Address: `0x003479D0`
- Size: `0x98` (152 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.875 | 7.5 | `candidate.cpp` |
| 2 | different | 73.0263 | 71.0526 | `candidate.cpp` |
| 3 | different | 63.8158 | 63.1579 | `candidate.cpp` |
| 4 | different | 63.8158 | 63.1579 | `candidate.cpp` |
| 5 | different | 96.0526 | 94.7368 | `candidate.cpp` |

## Outcome

Five released-source and layout-faithful variants reproduced construction, packing, lookup, and destruction at exact size; the best candidate matched 36 of 38 instructions but constructor argument scheduling remained different.
