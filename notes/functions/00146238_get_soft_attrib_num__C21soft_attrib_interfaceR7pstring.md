# get_soft_attrib_num__C21soft_attrib_interfaceR7pstring

- Address: `0x00146238`
- Size: `0x60` (96 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/soft_attrib_interface.h`
- Reference source: `KS/SRC/soft_attrib_interface.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.125 | 4.1667 | `candidate.cpp` |
| 2 | different | 36.4583 | 16.6667 | `candidate.cpp` |
| 3 | different | 76.0417 | 62.5 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

Read the exact released macro-expanded pstring comparison and attribute layout. Preserving the equality result and forward success block matched on attempt 4.

## Outcome

Matched soft attribute numeric lookup
